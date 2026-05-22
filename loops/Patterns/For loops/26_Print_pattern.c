/* Print Pattern
	    E
      E D
    E D C
  E D C B
E D C B A
A B C D E  F G H I J K L M N O P Q R S T U V W X Y Z
[ \ ] ^ _ ' a b c d e f g h i j k l m n o p q r s t u v w x y z
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='A'-1;
	int i,j,k,c;

	for(i=5;i>=1;i--)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=5;k>=i;k--)
		{
			printf("%5c",ch+k);
		}
		printf("\n");
		}
		for(c=65;c<=122;c++)
		{
			printf("%c",c);
			printf(" ");
		}

}
// Output:
// 		     E
// 	       E D
// 	     E D C
// 	   E D C B
// 	 E D C B A
//   A B C D E  F G H I J K L M N O P Q R S T U V W X Y Z
//   [ \ ] ^ _ ' a b c d e f g h i j k l m n o p q r s t u v w x y z