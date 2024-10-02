#include<stdio.h>
#include<conio.h>
void main()
{
 int r,c,i,j,large,arr[5][5];
 printf("enter the no of rows: ");
 scanf("%d",&r);
 printf("enter the no of columns: ");
 scanf("%d",&c);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("enter the element: ");
   scanf("%d",&arr[i][j]);
  }
 }
 printf("the array is:\n ");
  for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(arr[i][j]>large)
   {
    large=arr[i][j];
   }
   printf(" %d ",arr[i][j]);
  }
  printf("\n");
 }
 printf("largest no is %d",large);

 getch();
}
