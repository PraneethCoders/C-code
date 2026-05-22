//  calloc( ) function with Dynamic Array

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

int main()
{
	int *p;
	int i, n, s;
	clrscr();

	printf(" Enter Number of Terms : ");
	scanf("%d", &n);
	p = (int *)calloc(n, sizeof(int));

	if (!p)
		printf("\nUnable to allocate size.\n");
	else
	{
		for(i=0; i<n; i++)
		{
			printf(" Enter Value : ");
			scanf("%d", (p+i));
		}

		printf(" Values are : ");
		s = 0;
		for(i=0; i<n; i++)
		{
			printf("  %d", *(p+i));
			s = s + *(p+i);
		}
		printf("\n Sum of Elements = %d", s);
	}

	free(p);

	getch();
	return 0;
}
// Output:
//  Enter Number of Terms : 5
//  Enter Value : 20
//  Enter Value : 40
//  Enter Value : 60
//  Enter Value : 80
//  Enter Value : 100
//  Values are :  20  40  60  80  100
//  Sum of elements = 300
