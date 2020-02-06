#include <stdio.h>
/**
 * main -  Prints the size of variables
 * printf - Print a variable or messege
 * Return: 0
 */
int main(void)
{

  char ch;
  int in;
  long lo;
  long long lin;
  float fl;

printf("Size of a char:%lubyte(s)\n", sizeof(ch));
printf("Size of an int:%lubyte(s)\n", sizeof(in));
printf("Size of a long int:%lubyte(s)\n", sizeof(lo));
printf("Size of a long long int:%lubyte(s)\n", sizeof(lin));
printf("Size of a float:%lubyte(s)\n", sizeof(fl));
return (0);
}
