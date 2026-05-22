// Check String is Palindrom or Not
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[100],i,j,f=0;
	printf("enter the word:: ");
	gets(s);
	j=strlen(s);
	for(i=0;i<=j/2;i++)
	{
	 	if(s[i]==s[j-1])
	     	{
			f=0;
	     	}	
	     	else
	     	{
	       		f=102;
	  	printf("Not Palindrom");
	       	break;
	      	}
	    	j--;
	  }
	if(f==0)
	{
		    printf("Palindrom");
	 }
}