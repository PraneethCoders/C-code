//  use getc() & putc() function with console ( stdin & stdout )
#include <stdio.h>
#include <conio.h>

int main( )
{
	char  ch ;
	clrscr() ;

   	printf( "\n Enter String( ctrl+z to end ):\n" );
	while ( ( ch = getc ( stdin ) ) != EOF )
   	{
		putc ( ch, stdout ) ;
   	}

	getch();
	return 0;
}
// Output:
//  Enter String( ctrl+z to end ):
//  Nils
//  Patel
//  ^Z