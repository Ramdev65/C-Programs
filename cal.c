#include<stdio.h>
int main()
{
  int date , month , year,leap,days;
  printf("Enter input in numeric order :\n");
  printf("Enter date\n");
  scanf("%d",&date);
  printf("\nEnter Month\n");
  scanf("%d",&month);
  printf("\nEnter Year\n");
  scanf("%d",&year);
 
  int sum=0,year1;
  if(date >= 7)
  {
    date=date%7;
  }

  switch(month)
  {
    case 1: month = 0;
           break;
    case 2: month=3;break;
    case 3: month=4;break;
    case 4: month=0;break;
    case 5: month=2;break;
    case 6: month=5;break;
    case 7: month=0;break;
    case 8: month=3;break;
    case 9: month=6;break;
    case 10: month=1;break;
    case 11: month=4;break;
    case 12: month=6;break;
    default :  printf("Enter a valid input");
              break;
  }
  if(year >= 2000 && year <=2099)
  {
     year1 = 6;
  }

  int year2,m;
 
  year2= year%100;
  m = year2;

  days = year2 % 7;
 
  leap = m / 4;

  if(leap >=7)
  {
     leap= leap%7;
  }
  sum = date + month + year1 + leap + days;
  
   switch(sum%7)
  {
    case 0: printf("Day is Saturday");break;
    case 1: printf("Day is Sunday");break;
    case 2: printf("Day is Monday");break;
    case 3: printf("Day is tuesday");break;
    case 4: printf("Day is wednesday");break;
    case 5: printf("Day is thursday");break;
    case 6: printf("Day is friday");break;
  }

}
