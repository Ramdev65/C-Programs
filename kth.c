#include<stdio.h>
int main()
{
   int a[10];
   printf("Enter elements in array");

   for(int i=0; i<10; i++)
   {
     scanf("%d",&a[i]);
   } 
   printf("Array is : ");
   for(int i=0; i<10;i++)
   {
      printf("%d",a[i]);
   }

   printf("Enter the kth element ");
   int k,j=0,b[10];
   scanf("%d",&k);
   k=k-1;
   int t=k;
   while(k<10)
   {
      b[j]=a[k];
      k=k+1;
      j=j+1;
   }
   for(int i=0; i<t; i++)
   {
      b[j] = a[i];
      j=j+1;

   }
   for(int i=0; i<10; i++)
   {
     printf("%d ",b[i]);
   }

}
