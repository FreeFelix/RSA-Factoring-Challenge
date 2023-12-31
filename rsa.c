#include "rsa_factor.h"

/**
 * main - main function
 * Author: FreeFelix
 * RETURN: Always 0 (success)
 */
int main(int argc, char *argv[])
{
FILE *fptr;
size_t count;
size_t line;
char *buff = NULL;

if (argc != 2)
{
fprintf(stderr, "Usage: factor <filename>\n");
exit(EXIT_FAILURE);
}
fptr = fopen(argv[1], "r");
if (fptr == NULL)
{
fprintf(stderr, "Error: can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while ((line = getline(&buff, &count, fptr)) != -1)
{
factorize (buff);
}
return (0);
}
