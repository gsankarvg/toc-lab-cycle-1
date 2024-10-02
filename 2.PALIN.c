#include<stdio.h>
int main()
{
 int num,rem,sum=0;

 printf("enter a no: ");
 scanf("%d",&num);
 while(num>0)
 {
 rem=num%10;
 sum=sum*10+rem;
 num=num/10;
 }
printf("palindrom is %d",sum);
return 0;
}