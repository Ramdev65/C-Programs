#include<stdio.h>

int main()
{
     int n;
    printf("Enter the number to know its factorial ");
    scanf("%d",&n);
    int fact,r;
    int i=1;
    fact=n;
    do
    {
       
	r=n-i;
        fact= fact*r;
	i++;
    }while(i<n);
    printf("Hence the value of factorial:%d",fact);
}
