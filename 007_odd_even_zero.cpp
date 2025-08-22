#include<stdio.h>
int main()
{
  int num ;
  printf("enter a number: \n");
  scanf("%d",&num);
  if(num ==0)
  {
    printf("number is even");
  }
  else if(num%2==0)
  {
    printf("number is zero");
  }
  else
  {
    printf(" number is odd");
  }
  return 0;
}
