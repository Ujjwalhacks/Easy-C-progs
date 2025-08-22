#include<stdio.h>
int main()
{
  int num1,num2,swap;
  printf("enter num 1 :\n");
  scanf("%d",&num1);
  printf("enter num 2 :\n");
  scanf("%d",&num2);
  swap=num1;
  num1=num2;
  num2=swap;
  printf("after swap :num 1 :%d ,num 2 :%d",num1,num2);
  return 0;
}
  
  
