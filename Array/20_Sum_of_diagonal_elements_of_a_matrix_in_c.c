// Sum of diagonal elements of a matrix in c

#include<stdio.h>
void main(){
  int a[10][10],sum=0,m,n;
  printf("\nEnter the row and column of matrix: ");
  scanf("%d%d",&m,&n);
  printf("\nEnter the elements of matrix: ");
  for(int i = 0;i < m;i++)
  {
      for(int j = 0;j < n;j++)
      {
           scanf("%d",&a[i][j]);
      }
  }
  printf("\nThe matrix is\n");
  for(int i = 0;i < m;i++)
  {
      printf("\n");
      for(int j = 0;j < m;j++)
      {
        printf("%d\t",a[i][j]);
      }
  }
  for(int i = 0;i < m;i++)
  {
     for(int j = 0;j < n;j++)
     {
          if(i==j)
              sum=sum+a[i][j];
     }
  }

   printf("\nSum of the diagonal elements of a matrix is: %d",sum);
}
//Output:
// Enter the row and column of matrix: 3 3
// 1 2 3 4 5 6 7 8 9
// The matrix is
// 1  2  3
// 4  5  6
// 7  8  9
// Sum of the diagonal elements of a matrix is: 15
