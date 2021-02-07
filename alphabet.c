#include<stdio.h>
int main()
{
  char i,j;
  for(i='A',j='z'; i<='Z'&&j>='a'; i++,j--)
  {
     printf("('%c','%c'),",i,j);
  }
}
