#include<stdio.h>
#include<conio.h>

int main(void)
{int a,b;
char op;

printf ("enter first number: ");
scanf("%d", &a);

printf("enter operator(+,-,*,/): ");
scanf(" %c ",&op);

printf("enter second number: ");
scanf("%d", &b);

switch (op)
{
case '+':
printf("result = %d\n",a+b);
break;
case '-':
printf("result = %d\n",a-b);
break;
case '*':
printf("result = %d\n",a*b);
break;
case '/':
if (b != 0)
printf("result = %.2f\n",(float)a/b);
else
printf("cannot divide by zero!\n");
break;
default:
printf("invalid operator!\n");
}
return 0;
}