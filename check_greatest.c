#include <stdio.h>

int main() 
{ int num1, num2, num3;
 printf("enter three value");
 scanf("%d %d %d",&num1, &num2, &num3 );

 //to check who is greates number
 if(num1>=num2 && num1>=num3)
 {
   printf("%d is greatest number", num1);
 }
 else if (num2>=num3 && num2>=num1)
 {
   printf("%d is greatest number", num2);
 }
 else
   {
    printf("%d is greatest number", num3);
   }

    return 0;
}