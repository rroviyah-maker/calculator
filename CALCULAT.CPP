#include<stdio.h>
int main()
{
 float a, b; char op;
 printf("enter two numbers:");
 scanf("%f %d %f",a,op,b);
 switch(op)
     {
      case '+':printf(" %2f\n", a+b);
      case '-':printf(" %2f\n", a-b);
      case '*':printf(" %2f\n", a*b);
      case '/':
	  if (b!=0)
	  {
	   printf(" %2f\n", a/b);
	   break ;
	  }
      }
 return 0;
}