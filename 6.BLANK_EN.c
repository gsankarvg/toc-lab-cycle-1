#include<stdio.h>
int main()
{
 int arr[30];
 int num=0,size=0;
 int isnumber;
 char ch;
 int i;
 printf("enter a series of integers(press enter to return array):\n");
 while(1)
 {
  num=0;
  isnumber=0;
  while((ch=getchar())!='\n')
  {
   if(ch>='0'&&ch<='9')
   {
    num=num*10+(ch-'0');
    isnumber=1;
   }
   else if(ch==' ')
   {
    break;
   }
  }
  if(isnumber)
  {
   arr[size]=num;
   size++;
  }
 if(ch=='\n'&&! isnumber)
 {
  break;
  }
 }
 printf("\n you entered:");
 for(i=0;i<size;i++)
 {
  printf(" %d ",arr[i]);
 }
 printf("\n");
 return 0;
}
