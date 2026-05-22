//  differentiate Structure and Union
#include <stdio.h>
#include <conio.h>
union ABC
{
	char a;
	int b;
	float c;
};
struct XYZ
{
	char x;
	int y;
	float z;
};
int main()
{
	union ABC p;
	struct XYZ q;

	printf( "\n Size of Structure : %d", sizeof(struct XYZ) );
	q.x = 'N';
	q.y = 10;
	q.z = 14.345;
	printf( "\n q.x = %c\n q.y = %d\n q.z = %f\n", q.x, q.y, q.z );
    
	printf( "\n Size of Union : %d", sizeof(union ABC) );
	p.a = 'N';
	printf( "\n p.a : %c", p.a );
	p.b = 10;
	printf( "\n p.b : %d", p.b );
	p.c = 14.345;
	printf( "\n p.c : %f", p.c );

	return 0;
}
// Output:
//  Size of Structure : 9
//  q.x = N
//  q.y = 10
//  q.z = 14.345000

//  Size of Union : 4
//  p.x = N
//  p.y = 10
//  p.z = 14.345000