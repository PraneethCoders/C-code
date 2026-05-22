/*Find how many times a number present in array*/ 
#include<stdio.h>
#define MAX 100
void main()
{
     int arr[MAX],n,i,item,count=0,a[MAX];
     printf("Enter size of Array: "); 
     scanf("%d",&n);
     printf("Enter %d elements\n",n);
     for(i=0;i<n;i++)
     {
     	scanf("%d",&arr[i]);
     }
     printf("\nEnter element you want to search: ");
     scanf("%d",&item);
     for(i=0;i<n;i++)
     {
     	  if(arr[i]==item)
     	  {
     	  	a[count]=i+1;
     	  	count++;
     	  }
        
     }
     if(count!=0)
     {   printf("\nItem found at  ");
     	for(i=0;i<count;i++)
     	{
     		printf("%d ",a[i]);
     	}
     	
     }
     else
     {
     	printf("\nItem not found");
     }
     
}
//Output:
// Enter size of Array: 5
// Enter 5 elements
// 23 6 75 23 0
// Enter element you want to search: 23
// Item found at  1 4
