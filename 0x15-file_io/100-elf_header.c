#include "main.h"
#include <elf.h>
void print_osabi_more(Elf64_Ehdr h);
/**
 * print_magic - Function that prints the magic numbers
 * @h: Elf Header
 * Return: Void (Success)
 */
void print_magic(Elf64_Ehdr h)
{
int a;
printf("  Magic:   ");
for (a = 0 ; a < EI_NIDENT ; a++)
printf("%2.2x%s", h.e_ident[a], a == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_class - Function that prints the class of an ELF
 * @h: ELF HEADER
 * Return: Void
 */
void print_class(Elf64_Ehdr h)
{
printf("  Class:                             ");
switch (h.e_ident[EI_CLASS])
{
case ELFCLASS64:
printf("ELF64");
break;
case ELFCLASS32:
printf("ELF32");
break;
case ELFCLASSNONE:
printf("none");
break;
}
printf("\n");
}
/**
 * print_data - Funtion that prints the data of an ELF
 * @h: ELF HEADER
 * Return: Void
 */
void print_data(Elf64_Ehdr h)
{
printf("  Data:                              ");
switch (h.e_ident[EI_DATA])
{
case ELFDATA2MSB:
printf("2's complement, big endian");
break;
case ELFDATA2LSB:
printf("2's complement, little endian");
break;
case ELFDATANONE:
printf("none");
break;
}
printf("\n");
}
/**
 * print_version - Function that prints the version of an ELF
 * @h: ELF HEADER
 * Return: Void
 */
void print_version(Elf64_Ehdr h)
{
printf("  Version:                           %d", h.e_ident[EI_VERSION]);
switch (h.e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)");
break;
case EV_NONE:
printf("%s", "");
break;
break;
}
printf("\n");
}
/**
 * print_osabi - Prints the OS/ABI
 * @h: ELF HEADER
 * Return: Void
 */
void print_osabi(Elf64_Ehdr h)
{
printf("  OS/ABI:                            ");
switch (h.e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris");
break;
case ELFOSABI_AIX:
printf("UNIX - AIX");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64");
break;
default:
print_osabi_more(h);
break;
}
printf("\n");
}
/**
 * print_osabi_more - Function that prints ELF osabi more
 * @h: ELF HEADER
 * rReturn: Void
 */
void print_osabi_more(Elf64_Ehdr h)
{
switch (h.e_ident[EI_OSABI])
{
case ELFOSABI_MODESTO:
printf("UNIX - Modesto");
break;
case ELFOSABI_OPENBSD:
printf ("UNIX - OpenBSD");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App");
break;
case ELFOSABI_ARM:
printf("ARM");
break;
default:
printf("<unknown: %x>", h.e_ident[EI_OSABI]);
break;
}
}
/**
 * print_abi - Function that prints the ABI version
 * @h: ELF HEADER
 * Return: Void
 */
void print_abi(Elf64_Ehdr h)
{
printf("  ABI Version:                       %d\n", h.e_ident[EI_ABIVERSION]);
}
/**
 * print_type - Function that prints the type of an ELF
 * @h: ELF HEADER
 * Return: Void
 */
void print_type(Elf64_Ehdr h)
{
char *n = (char *)&h.e_type;
int m = 0;
printf("  Type:                              ");
if (h.e_ident[EI_DATA] == ELFDATA2MSB)
m = 1;
switch (n[m])
{
case ET_NONE:
printf("NONE (None)");
break;
case ET_REL:
printf("REL (Relocatable file)");
break;
case ET_EXEC:
printf("EXEC (Executable file)");
break;
case ET_DYN:
printf("DYN (Shared object file)");
break;
case ET_CORE:
printf("CORE (Core file)");
break;
default:
printf("<unknown: %x", n[m]);
break;
}
printf("\n");
}
/**
 * print_entry - Function that prints the entry point
 * @h: ELF HEADER
 * Return: Void
 */
void print_entry(Elf64_Ehdr h)
{
int n = 0, m = 0;
unsigned char *o = (unsigned char *)&h.e_entry;
printf("  Entry point address:               0x");
if (h.e_ident[EI_DATA] != ELFDATA2MSB)
{
n = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
while (!o[n])
n--;
printf("%x", o[n--]);
for (; n >= 0 ; n--)
printf("%02x", o[n]);
printf("\n");
}
else
{
n = 0;
m = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
while (!o[n])
n++;
printf("%x", o[n++]);
for (; n <= m ; n++)
printf("%02x", o[n]);
printf("\n");
}
}
/**
 * main - Function that displays the information contained in the
 * ELF
 * @ac: argument 1
 * @av: argument 2
 * Return: 1 if it succed or 0 when it fails
 * If the file is not an ELF File or the function fails exit code 98.
 */
int main(int ac, char **av)
{
int a;
Elf64_Ehdr h;
ssize_t c;
if (ac != 2)
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
a = open(av[1], O_RDONLY);
if (a == -1)
dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
c = read(a, &h, sizeof(h));
if (c < 1 || c != sizeof(h))
dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
	h.e_ident[3] == 'F')
{
printf("ELF Header:\n");
}
else
dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
print_magic(h);
print_class(h);
print_data(h);
print_version(h);
print_osabi(h);
print_abi(h);
print_type(h);
print_entry(h);
if (close(a))
dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", a), exit(98);
return (EXIT_SUCCESS);
}
