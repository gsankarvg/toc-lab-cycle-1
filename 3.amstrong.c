#include<stdio.h>

int main()
{
  int amt=0,n,digit,num;
  printf("enter a number : ");
  scanf("%d",&n);
  num=n;
  while(n>0)
  {
    digit=n%10;
    amt+=digit*digit*digit;
    n=n/10;
  }
  if(num==amt)
  {
    printf("it is an armstrong no");
  }
  else
  {
    printf("it is not");
  }
  return 0;
}
