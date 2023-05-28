#include <stdio.h>

int main() 
{ 
  int n, n1, i, j, prime_no, count = 0;
  printf("Enter two numbers (n and n1) to find prime numbers between n and n1 (inclusive): \n");
  scanf("%d %d", &n, &n1);
  printf("Prime numbers from %d to %d: \n", n, n1);
  for(i=n; i<=n1; i++)
  {
    prime_no = 1;
    for(j=2; j<i; j++)
    {
      if(i % j == 0)
      {
        prime_no = 0;
      }
    }
    if(prime_no == 1)
    {
      count++;
      printf("%d\n", i);
    }
  }
  printf("Total prime numbers from %d to %d: %d\n", n, n1, count);
  return 0;
}
