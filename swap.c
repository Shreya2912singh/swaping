#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);  \\a= 5 b= 7
  a=a+b;  \\ a= 5+7=12
  b=a-b;  \\ b=12-7=5
  a=a-b;  \\ a= 12-5=7
  printf ("Swaped numbers are %d,%d",a,b); \\ 7,5
  return 0;
}
