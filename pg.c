#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,num3;
 printf("enter num1,num2,num3");
 scanf("%d%d%d",&num1,&num2,&num3);
 if(num1>num2&&num1>num3)
 {
  printf("num1 is greatest");
  else if(num2>num1&&num2>num3)
  printf("num2 is greatest");
  else if(num3>num1&&num3>num2)
  printf("num3 is greatest");
  else
  printf("all are equal or any two values are equal");
  }
  getch();
  }
