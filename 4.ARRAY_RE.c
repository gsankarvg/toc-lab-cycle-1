#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[10],n,i;
 printf("enter the no of elements: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("enter the element: ");
 scanf("%d",&arr[i]);
 }

 printf("Reversed array is ");
 for(i=n-1;i>=0;i--)
 {
 printf(" %d ",arr[i]);
 }
 getch();
 return 0;
}