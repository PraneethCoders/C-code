//  use realloc( ) function
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <process.h>

int main()
{
	int *p;
	int i, x, n, s;
	clrscr();

	printf(" Enter Size of Dynamic Array : ");
	scanf("%d", &n);
	p = (int *)malloc(n * sizeof(int));

	if (!p)
		printf("\nUnable to allocate size.\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			printf(" Enter Value : ");
			scanf("%d", (p + i));
		}

		printf(" Values are : ");
		s = 0;
		for (i = 0; i < n; i++)
		{
			printf("  %d", *(p + i));
			s = s + *(p + i);
		}
		printf("\n Sum of Elements = %d", s);

		x = n;
		printf("\n\n Enter New Size of Dynamic Array : ");
		scanf("%d", &n);

		realloc(p, n * sizeof(int));

		if (!p)
		{
			printf("\nUnable to allocate size \n");
			exit(1);
		}

		for (i = x; i < n; i++)
		{
			printf(" Enter Additional Value : ");
			scanf("%d", (p + i));
		}

		printf(" Values are : ");
		s = 0;
		for (i = 0; i < n; i++)
		{
			printf("  %d", *(p + i));
			s = s + *(p + i);
		}
		printf("\n Sum of elements = %d", s);
	}

   	free(p);

	getch();
	return 0;
}
// Output: 
//  Enter Size of Dynamic Array : 5
//  Enter Value : 20
//  Enter Value : 40
//  Enter Value : 60
//  Enter Value : 80
//  Enter Value : 100
//  Values are :  20  40  60  80  100
//  Sum of elements = 300

//  Enter New Size of Dynamic Array : 7
//  Enter Additional Value : 120
//  Enter Additional Value : 140
//  Values are :  20  40  60  80  100  120  140
//  Sum of elements = 560