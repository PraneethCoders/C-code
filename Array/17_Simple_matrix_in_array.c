// Transpose of matrix

#include<stdio.h>
#include<conio.h>
void main({
	int n,array[10][10];
	
	printf("Enter N:");
	scanf("%d",&n);
	printf("Enter %d*%d matrix\n",n,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d\t",&array[i][j]);
		}
	}
	printf("Original matrix\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",array[i][j]);
		}printf("\n");
	}
	printf("Traspose matrix\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",array[j][i]);
		}printf("\n");
	}
	
}
//Output:
//	Enter N:3
//	Enter 3*3 matrix
//	1
//	2
//	3
//	4
//	5
//	6
//	7
//	8
//	9
//	Original matrix
//	1  2  3
// 	4  5  6 
// 	7  8  9
//	Transpose matrix
//	1  4  7 
//  2  5  8
//	3  6  9
