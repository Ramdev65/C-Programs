#include<stdio.h>
int main()
{
  int n,A[n];
   printf("ENter how many number u want to print of fibonacci seriea:");
  
   scanf("%d",&n);
   int a=0,b=1,result;
   for(int i=1; i<=n; i++)
   {
      if(i==1)
      {
        result = i;
      }

      else{

       result=a+b;
       a=b;
       b=result;
       }
       printf("%d",result);
       A[n]=result;
   }
   int x,y;
   printf("Enter two numbers to recognize:");
   scanf("%d%d",&x,&y);
   printf("%d",a[n]);
   if(x == A[n] && y== A[n])
   {
     printf("these are the elements of this serie");
   }

}
