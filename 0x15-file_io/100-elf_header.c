#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 64

void print_magic(unsigned char *magic)
{
    int i;
    for (i = 0; i < 16; i++)
        printf("%02x ", magic[i]);
    printf("\n");

}

void print_class(unsigned char class)
{
    printf("  Class:                             ");
    if (class == 1)
        printf("ELF32\n");
    else if (class == 2)
        printf("ELF64\n");
    else
        printf("<unknown>\n");
}

void print_data(unsigned char data)
{
    printf("  Data:                              ");
    if (data == 1)
        printf("2's complement, little endian\n");
    else if (data == 2)
        printf("2's complement, big endian\n");
    else
        printf("<unknown>\n");
}

void print_version(unsigned char version)
{
    printf("  Version:                           %d (current)\n", version);
}

void print_osabi(unsigned char osabi)
{
    printf("  OS/ABI:                            ");
    switch (osabi)
    {
        case 0:
            printf("UNIX - System V\n");
            break;
        case 1:
            printf("HP-UX\n");
            break;
        case 2:
            printf("NetBSD\n");
            break;
     
        default:
            printf("<unknown: %d>\n", osabi);
    }
}

void print_abi_version(unsigned char abi_version)
{
    printf("  ABI Version:                       %d\n", abi_version);
}

void print_type(unsigned short type)
{
    printf("  Type:                              ");
    switch (type)
    {
        case 1:
            printf("REL (Relocatable file)\n");
            break;
        case 2:
            printf("EXEC (Executable file)\n");
            break;
        case 3:
            printf("DYN (Shared object file)\n");
            break;

        default:
            printf("<unknown: %d>\n", type);
    }
}

void print_entry(unsigned long entry)
{
    printf("  Entry point address:               0x%lx\n", entry);
}

int main(int argc, char *argv[])
{
    int fd;
    unsigned char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
        return (98);
    }

    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
        close(fd);
        return (98);
    }

    if (bytes_read < BUFFER_SIZE)
    {
        dprintf(STDERR_FILENO, "Error: Invalid ELF header size\n");
        close(fd);
        return (98);
    }

    printf("ELF Header:\n");
    print_magic(buffer);
    print_class(buffer[4]);
    print_data(buffer[5]);
    print_version(buffer[6]);
    print_osabi(buffer[7]);
    print_abi_version(buffer[8]);
    print_type(*(unsigned short *)(buffer + 16));
    print_entry(*(unsigned long *)(buffer + 24));

    close(fd);
    return (0);
}

