#include <stdio.h>

int main(){
  int octal;

  printf("Enter an octal number: ");
  scanf("%o",&octal);

  printf("Decimal = %d\n",octal);
  printf("Hexadecimal = %x",octal);
  return 0;
}