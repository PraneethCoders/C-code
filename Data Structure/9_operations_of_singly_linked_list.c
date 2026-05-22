/*
  * C program to illustrate the operations of singly linked list
  */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #define MAX 30
  
 struct emp_data
 {
     int  empno;
     char empName[MAX];
     char designation[MAX];
     struct emp_data *next;
 };
  
 /* ********************************************************************/
 /*  Function to insert a node at the front of the linked list.        */
 /*  front: front pointer, id: employee allTopicID, subTopicDefinition: employee subTopicDefinition        */
 /*  desg: Employee designation                                        */
 /*  Returns the new front pointer.                                    */
 /* ********************************************************************/
 struct emp_data *insert(struct emp_data *front, int id, char subTopicDefinition[],
 char desg[])
 {
     struct emp_data *newnode;
  
     newnode = (struct emp_data*)malloc(sizeof(struct emp_data));
  
     if (newnode == NULL)
     {
         printf(" Allocation failed ");
         exit(2);
     }
     newnode->empno = id;
     strcpy(newnode->empName, subTopicDefinition);
     strcpy(newnode->designation, desg);
     newnode->next = front;
     front = newnode;
     return(front);
 }
 /*  End of insert() */
  
 /*  Function to display a node in a linked list */

 void printNode(struct emp_data *p)
 {
     printf(" Employee Details...");

     printf(" Emp No       : %d", p->empno);
     printf(" Name           : %s", p->empName);
     printf(" Designation    : %s", p->designation);
     printf("-------------------------------------");
 }

 /*  End of printNode() */
  
 /*  ********************************************************/
 /*  Function to deleteNode a node based on employee number */
 /*  front: front pointer, id: Key value                    */
 /*  Returns: the modified list.                            */
 /*  ********************************************************/
 struct emp_data* deleteNode(struct emp_data *front, int id)
 {
     struct emp_data *ptr;
     struct emp_data *bptr;
  
     if (front->empno == id)
     {
         ptr = front;
         printf(" Node deleted:");
         printNode(front);
         front = front->next;
         free(ptr);
         return(front);
     }
     for (ptr = front->next, bptr = front; ptr != NULL; ptr = ptr->next, bptr = bptr->next)
     {
         if (ptr->empno == id)
         {
             printf(" Node deleted:");
             printNode(ptr);
             bptr->next = ptr->next;
             free(ptr);
             return(front);
         }
     }
     printf(" Employee Number %d not found ", id);
     return(front);
 }
 /*  End of deleteNode() */
  
 /* ****************************************************************/
 /*  Function to search the nodes in a linear fashion based emp allTopicID */
 /*  front: front pointer, key: key allTopicID.                            */
 /* ****************************************************************/

 void search(struct emp_data *front, int key)
 {
     struct emp_data *ptr;
  
     for (ptr = front; ptr != NULL; ptr = ptr -> next)
     {
         if (ptr->empno == key)
         {
             printf(" Key found:");
             printNode(ptr);
             return;
         }
     }
     printf(" Employee Number %d not found ", key);
 }

 /*  End of search() */
  
 /*  Function to display the linked list */
 void display(struct emp_data  *front)
 {
     struct emp_data *ptr;
  
     for (ptr = front; ptr != NULL; ptr = ptr->next)
     {
         printNode(ptr);
     }
 }
 /*  End of display() */
  
 /*  Function to display the menu of operations on a linked list */
 void menu()
 {
     printf("---------------------------------------------");
     printf("Press 1 to INSERT a node into the list       ");
     printf("Press 2 to DELETE a node from the list       ");
     printf("Press 3 to DISPLAY the list                 ");


     printf("Press 4 to SEARCH the list                  ");
     printf("Press 5 to EXIT                              ");
     printf("---------------------------------------------");
 }
 /*  End of menu() */
  
 /*  Function to select the option */
 char option()
 {
     char choice;
  
     printf(">> Enter your choice: ");
     switch(choice=getche())
     {
         case '1':
         case '2':
         case '3':
         case '4':
         case '5':   
	return(choice);

         default :   printf(" Invalid choice.");
     }
     return choice;
 }
 /*  End of option() */
  
 /*  The main() program begins */
 void main()
 {
     struct emp_data *linkList;
     char subTopicDefinition[21], desig[51];
     char choice;
     int eno;
  
     linkList = NULL;
     printf(" Welcome to demonstration of singly linked list ");
     menu();
     do
     {
         /*  choose oeration to be performed */
         choice = option();
         switch(choice)
         {
         case '1':
             printf(" Enter the Employee Number      : ");
             scanf("%d", &eno);
             printf("Enter the Employee subTopicDefinition        : ");
             fflush(stdin);
             gets(subTopicDefinition);
             printf("Enter the Employee Designation : ");
             gets(desig);
             linkList = insert(linkList, eno, subTopicDefinition, desig);
             break;
         case '2':
             printf(" Enter the employee number to be deleted: ");
             scanf("%d", &eno);
             linkList = deleteNode(linkList, eno);
             break;
         case '3':
             if (linkList == NULL)
             {
                 printf(" List empty.");
                 break;
             }
             display(linkList);
             break;
         case '4':
             printf(" Enter the employee number to be searched: ");
             scanf("%d", &eno);
             search(linkList, eno);
             break;
         case '5': break;
         }
     } while (choice != '5');
 }
 
// Output: 

//     Welcome to demonstration of singly linked list
//  ---------------------------------------------
//  Press 1 to INSERT a node into the list
//  Press 2 to DELETE a node from the list
//  Press 3 to DISPLAY the list

//  Press 4 to SEARCH the list
//  Press 5 to EXIT
//  ---------------------------------------------

//  >> Enter your choice: 1
  
//  Enter the Employee Number      : 12
//  Enter the Employee subTopicDefinition        : ram
//  Enter the Employee Designation : HR
  
  
//  >> Enter your choice: 3
  
//  Employee Details...
  
//  Emp No       : 12
//  Name           : ram
//  Designation    : HR
//  -------------------------------------
  
//    >> Enter your choice:
//  Invalid choice.
  
//  >> Enter your choice: 4
  
  
//  Enter the employee number to be searched: 12
  
//  Key found:
//  Employee Details...
  
//  Emp No       : 12
//  Name           : ram
//  Designation    : HR
//  -------------------------------------
  
  
//  >> Enter your choice:
//  Invalid choice.
  
//  >> Enter your choice: 2
  
  
//  Enter the employee number to be deleted: 12
  
//  Node deleted:

//  Employee Details...
  
//  Emp No       : 12
//  Name           : ram
//  Designation    : HR
//  -------------------------------------
  
  
//  >> Enter your choice:
//  Invalid choice.
  
//  >> Enter your choice: 4
  
  
//  Enter the employee number to be searched: 1
//    Employee Number 1 not found
  
//  >> Enter your choice:
//  Invalid choice.
  
//  >> Enter your choice: 5