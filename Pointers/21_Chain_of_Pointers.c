//Chain of Pointers
#include <stdio.h>
#include <conio.h>
int main ()
{
	int a = 10;
	int *p, **pp, ***ppp, ****pppp;
	
	p = &a;

	printf( "\n p = %u", p );
	printf( "\n *p = %d", *p );

	pp = &p;

	printf( "\n\n pp = %u", pp );
	printf( "\n *pp = %u", *pp );
	printf( "\n **pp = %d", **pp);

	ppp = &pp;

	printf( "\n\n ppp = %u", ppp );
	printf( "\n *ppp = %u", *ppp );
	printf( "\n **ppp = %u", **ppp );
	printf( "\n ***ppp = %d", ***ppp );
	
    pppp = &ppp;

	printf( "\n\n pppp = %u", pppp );
	printf( "\n *pppp = %u", *pppp );
	printf( "\n **pppp = %u", **pppp );
	printf( "\n ***pppp = %u", ***pppp );
	printf( "\n ****pppp = %d", ****pppp );
    
	return 0;
}
// Output:
//  p = 1245064
//  *p = 10

//  pp = 1245060
//  *pp = 1245064
//  **pp = 10

//  ppp = 1245056
//  *ppp = 1245060
//  **ppp = 1245064
//  ***ppp = 10

//  pppp = 1245052
//  *pppp = 1245056
//  **pppp = 1245060
//  ***pppp = 1245064
//  ****pppp = 10