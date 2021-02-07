#include<stdio.h>
int main()
{ 
  int k;
//  printf("Enter the freq time:");
 // scanf("%d",&k);
  int a[6]={1,1,1,2,2,3};

  int frq[10]={0};

  for(int i=0 ; i<6; i++)
  {
     frq[a[i]]++;
  }
  int max=0,element;

  for(int i=0 ; i<10; i++)
  {
    if(frq[a[i]]>max)
    {
      max =frq[a[i]];
      element =i;
    }
  }
  printf("%d%d",max,a[element]);
}
