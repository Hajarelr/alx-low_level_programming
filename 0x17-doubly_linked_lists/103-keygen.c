#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - Functin that finds the biggest numb
 * @usrn: 1st input
 * @len: 2nd input
 * Return: The biggest num
 */
int f4(char *usrn, int len)
{
int n;
int m;
unsigned int o;
n = *usrn;
m = 0;
while (m < len)
{
if (n < usrn[m])
n = usrn[m];
m += 1;
}
srand(n ^ 14);
o = rand();
return (o & 63);
}
/**
 * f5 - Function multiplies char of usnmes
 * @usrn: 1st input
 * @len: 2nd input
 * Return: multiplied chars of usrnmes
 */
int f5(char *usrn, int len)
{
int p;
int q;
p = q = 0;
while (q < len)
{
p = p + usrn[q] * usrn[q];
q += 1;
}
return (((unsigned int)p ^ 239) & 63);
}
/**
 * f6 - Function that generates random char
 * @usrn: 1st input
 * Return: The random char
 */
int f6(char *usrn)
{
int r;
int s;
r = s = 0;
while (s < *usrn)
{
r = rand();
s += 1;
}
return (((unsigned int)r ^ 229) & 63);
}
/**
 * main - Function
 * @argc: 1st input
 * @argv: 2nd input
 * Return: 0 success
 */
int main(int argc, char **argv)
{
char keygen[7];
int t, u, v;
long w[] = {
0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
0x723161513346655a, 0x6b756f494b646850 };
(void) argc;
for (t = 0; argv[1][t]; t++)
;

keygen[0] = ((char *)w)[(t ^ 59) & 63];
u = v = 0;
while (v < t)
{
u = u + argv[1][v];
v = v + 1;
}
keygen[1] = ((char *)w)[(u ^ 79) & 63];
u = 1;
v = 0;
while (v < t)
{
u = argv[1][v] * u;
v = v + 1;
}
keygen[2] = ((char *)w)[(u ^ 85) & 63];

keygen[3] = ((char *)w)[f4(argv[1], t)];
keygen[4] = ((char *)w)[f5(argv[1], t)];
keygen[5] = ((char *)w)[f6(argv[1])];
keygen[6] = '\0';
for (u = 0; keygen[u]; u++)
printf("%c", keygen[u]);
return (0);
}
