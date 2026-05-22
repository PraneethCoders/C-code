/*
  *  C Program to Perform Binary Addition of Strings and Print it
  */
 #include <stdio.h>
 #include <string.h>
 /* global variables */
 char s1[10], s2[10], s3[10];
 int i, k;
 char carry = '0';
 /* function prototype */
 void binary_add(char *,char *);
 void main()
 {
     printf("enter string1");
     scanf(" %[^]s", s1);
     printf("enter string2");
     scanf(" %[^]s", s2);
     binary_add(s1, s2);
     printf("\nbinary addition of number is");
     if (carry == '1')
     {
         s3[i] = '1';
         for (i = 1;i <= k + 1;i++)
		 {
             printf("%c", s3[i]);
		 }
         printf("");
     }
     else
     {
         for (i = 1;i <= k + 1;i++)
		 {
             printf("%c", s3[i]);
		 }
         printf("");
     }
 }
 /* function to add two binary numbers in a string */
 void binary_add(char *s1, char *s2)
 {
     char *p1, *p2;
     p1 = s1;
     p2 = s2;
     k = strlen(s1);
  
     for (;*p1 != '' && *p2 != '';p1++, p2++);
     p1--;
     p2--;
     s3[k+1] = '';
     for (i = k + 1;i >= 1;i--, p1--, p2--)
     {
         if (*p1 == '0' && *p2 == '0'&& carry == '0')

         {
             s3[i] = (*p1 ^ *p2) ^ carry;
             carry = '0';
         }
         else if (*p1 == '0' && *p2 == '0' && carry == '1')
         {
             s3[i] = (*p1 ^ *p2)^ carry;
             carry = '0';
         }
         else if (*p1 == '0' && *p2 == '1' && carry == '0')
         {
             s3[i] = (*p1 ^ *p2)^ carry;
             carry = '0';
         }
         else if (*p1 == '0' && *p2 == '1' && carry == '1')
         {
             s3[i] = (*p1 ^ *p2)^ carry;
             carry = '1';
         }
         else if (*p1 == '1' && *p2 == '0' && carry == '0')
         {
             s3[i] = (*p1 ^ *p2)^ carry;
             carry = '0';
         }
         else if (*p1 == '1' && *p2 == '0' && carry == '1')
         {
             s3[i] = (*p1 ^ *p2)^ carry;
             carry = '1';
         }
         else if (*p1 == '1' && *p2 == '1' && carry == '0')
         {
             s3[i] = (*p1 ^ *p2)^ carry;
             carry = '1';
         }
         else
         {
             s3[i] = (*p1 ^ *p2)^ carry;
             carry = '1';
         }
     }
 }
//Output:
// enter string1
// 00010001
// enter string2
// 00010010
// binary addition of number is
// 000100011
