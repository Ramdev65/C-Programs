#include<stdio.h>
int main()
{
  int year;
  printf("Enter the year to check it is leap year or ordinary year\n");
  scanf("%d",&year);
  if(year<=0)
  {
    printf("This input is invalid kindly enter a valid year,try again!");

  }
  if(year % 100 == 0)
  {
      if(year%400==0)
      {
       printf("This year is a leap year\n");
       return 0;
      }
      else
      {
        printf("This is an ordinary year\n");
	return 0;
      }
  }
  else if(year % 4 == 0)
  {
     printf("This is a leap year\n");
     return 0;
  }
  else
  {
     printf("This is an ordinary year\n");
     return 0;
  }
}
/*test cases : year : 2000,3000(which is multiple of 4),-2000,1996,0,4 etc

*/
