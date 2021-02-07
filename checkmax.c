#include<stdio.h>
void check(int [][3]);
int main()
{
  int a[3][3];
  
  printf("Enter elements in 2d-array:\n");

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
     printf("a[%d][%d] : ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("you matrix is:\n");

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
       printf("%d ",a[i][j]);
    }
    printf("\n");
  }

//  printf("\nmax of min value of both diagonal is :% " ,check(a));
   printf("************************\n");
   check(a);
}

void check(int a[][3])
{
    int min1=a[0][0];

    int min2=a[0][2];

    for(int i=0 ,j=0; i<3; i++,j++)
    {
       
       if(a[i][j] < min1)
       {
         min1=a[i][j];
       }
    }
    printf("min of diagonal 1 :%d\n ",min1);
    for(int i=0,j=2; i<3; i++,j--)
    {
    
      if(a[i][j] < min2)
      {
        min2=a[i][j];
      }
    }
    printf("min of diagonal 2 : %d\n ",min2);
    int max = min1;
     if(min2 > max)
     {
       max=min2;
     }

    printf("Max of both is : %d",max);
}
