#include<stdio.h>
int main()
{
  int a[8]={1,2,2,2,3,3,5,6};
  int k,i,j,t;
  printf("Enter k:");
  scanf("%d",&k);
  int c=1,m=0;
  for(i=0; i<8; i++)
  {
   c=0;
   
    for(j=i+1; j<8; j++)
    {
       if(a[i]==a[j])
       {
         c++;
	// a[j]=-1;
       }
    }
    if(c > m)
    {
      m = c;
      t = a[i];
    }
   
  }
if(m > k)
{
  printf("%d",t);
}
  
}
