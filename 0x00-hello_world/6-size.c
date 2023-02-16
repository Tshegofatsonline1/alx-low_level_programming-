#include<stdio.h>

/**
 * main -entry point
 * Description: 'the program's description
 * Return: always 0 success
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %d  byte(s)\n", sizeof(char));
printf("Size of an int: %d  4 byte(s)\n", sizeof(int));
printf("Size of a long int: %d 4 byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d 8 byte(s)\n", sizeof(long long int));
printf("Size of a float: %d 4 byte(s)\n ", sizeof(float));
return (0);
}
