/* source.c */
#include <stdio.h>

int getSum10(int n)
{
  int sum;
  for (sum = 0; n != 0; n /= 10) 
  {
    sum += n % 10;
  }

  return sum;
}

int main(int argc, char *argv[]) 
{
  printf("%d \n", getSum10(9999));
}
