#include "rsa_factor.h"

/**
 * factorize - the fuction that factorize a number from rsa challenge
 * @buff : Pointer to the address of the number
 * 
 * RETURN : return integer value
 */

int factorize(char *buff)
{
u_int32_t num;
u_int32_t i;
num = atoi(buff);

for (i = 2; i <= num; i++)
{
if (num % i == 0)
{
printf("%d = %d * %d\n", num, num/i, i);
break;
}
}
return (0);
}

