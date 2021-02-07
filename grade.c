#include<stdio.h>
int main()
{
  int marks;
  int a,i=0;
while(i<10){
  a: printf("Enter marks :\n");
   scanf("%d",&marks);
   if(marks >100 || marks <0)
   {
      printf(" I ,Enter your marks between o to 100;");
      goto a;
   }
   switch(marks/10)
   {
      case 10:
      case 9:   
      case 8:  printf("Your Grade is 'A' "); break;
      case 7:  printf("Your grade is 'B' "); break;
      case 6:
      case 5:printf("your Grade is 'C' "); break;

      case 4: printf("Your grade is 'D' "); break;
      default :printf("You are Fail");
   
   }

   i++;
   }
}
