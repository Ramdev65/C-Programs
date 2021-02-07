#include<stdio.h>
int main()
{ 
   int n,len;
   
   printf("Enter the maximum number of elements:\n");
   scanf("%d",&n);

   printf("\nEnter the size of an array:\n");
   scanf("%d",&len);

   printf("\n");

   printf("Do you want to insert an element into the array ?\n");
   if(len < n)
   {
      printf("Space left");

   
   }
   else {
    printf("Array is full :");
   }
   :wq


}
