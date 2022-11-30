//creating and traveesion linked list 

#include<Stdio.h>
#include<stdlib.h>

// make the structure
struct L1
{
    int data;
    struct L1 * next;
};

 void display( struct L1 * current){
    while ( current!=NULL)
    {
    printf(" data of node = %d \n", current->data);
    current= current->next;
    }
    
 

 }








int main ()
{ 
     printf("kunal g solanki 210410107016\n");
 struct L1 *head;
 struct L1 *second;
 struct L1 *third;
 struct L1 *four; 
    
   
// create node using memory allocation
head = (struct L1*)malloc(sizeof(struct L1));
second = (struct L1*)malloc(sizeof(struct L1));
third = (struct L1*)malloc(sizeof(struct L1));
four = (struct L1*)malloc(sizeof(struct L1));

// first node data
head->data = 3;
head->next =second;

second->data = 4;
second->next =third;

third->data = 45;
third->next = four;
four->data = 50;
four->next = NULL;

display(head);

 return 0;



}