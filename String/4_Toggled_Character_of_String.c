// Toggled charecter in string
#include<stdio.h>
#include<conio.h>
void main()
{
	int len=0,i;
	char a[40],b[40];
    
	printf("Enter orignal string:");
	gets(a);
	while(a[len]!='\0')
		len++;
	for(i=0;i<len;i++)
	{
	       if(a[i]>'A'&&a[i]<='Z')
		{
		 	b[i]=a[i]+32;
		}
	       elseif(a[i]>='a'&&a[i]<='z')
		{
	       		b[i]=a[i]-32;
		}
	       else
		{
			b[i]=a[i];
		}
	} 
	printf("\ntoggled string:%s",b);

}
// Output:
// 	Enter orignal string:HOw Are YoU
// 	toggled string:hoW aRE yOu