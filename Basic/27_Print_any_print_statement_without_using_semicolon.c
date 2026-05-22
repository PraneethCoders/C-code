// Program to display function without using the Main Function
#include<stdio.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define begin decode(a,n,i,m,a,t,e)
int begin(){
	printf("Hello Developers");
	return 0;
}
// Output:
//  Hello Developers