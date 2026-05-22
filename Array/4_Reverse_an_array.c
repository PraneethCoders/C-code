/* Reverse an array*/
#include<stdio.h>
#define MAX 50
void main()
{
     int arr[MAX],n,temp;
     printf("Enter size of Array: "); 
     scanf("%d",&n);
     printf("Enter %d elements\n",n);
     for(int i=0;i<n;i++)
     {
     	scanf("%d",&arr[i]);
     }
     for(int i=0;i<n/2;i++)
     {
      temp=arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=temp;
     }
     printf("\nArray after reversing : \n");
     for(int i=0;i<n;i++)
     {
     	printf("%d  ",arr[i]);
     }
}
//Output:
// Enter size of Array: 5
// Enter %d elements
// 1 2 3 4 5 
// Array after reversing : 
// 5  4  3  2  1
