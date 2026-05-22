/*Print odd and even numbers of  an array separately*/
#include<stdio.h>	
#define MAX 50
void main()
{
     int arr[MAX],n,i;
     printf("Enter size of Array: "); 
     scanf("%d",&n);
     printf("Enter %d positive elements\n",n);
     for(i=0;i<n;i++)
     {
     	scanf("%d",&arr[i]);
     }
     printf("\n\nEven numbers: ");
     
	 for(i=0;i<n;i++)
     {
     	if(arr[i]%2==0)
     	{
     		printf("%d  ",arr[i]);
     	}
     }
     printf("\nOdd numbers: ");
     for(i=0;i<n;i++)
     {
     	if(arr[i]%2!=0)
     	{
     		printf("%d  ",arr[i]);
     	}
     }
}
//Output:
// Enter size of Array: 5
// Enter 5 positive elements
// 14 93 2 71 50
// Even numbers: 14 2 50
// Odd numbers: 93 71
