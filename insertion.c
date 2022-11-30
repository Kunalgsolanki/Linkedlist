// creating and traveesion linked list

#include <Stdio.h>
#include <stdlib.h>

// make the structure
struct L1
{
    int data;
    struct L1 *next;
};

void display(struct L1 *current)
{
    while (current != NULL)
    {
        printf(" data of node = %d \n", current->data);
        current = current->next;
    }
}

// begning insertion

struct L1 *Begning_Insertion(struct L1 *head, int data)
{

    struct L1 *newend = (struct L1 *)malloc(sizeof(struct L1));
    newend->next = head;
    newend->data = data;

    return newend;
}

// inter midiate insertion
/// this is not work at index =0;             this code by kgs
struct L1 *intermidiate_Insertion(struct L1 *head, int data, int index)
{

    struct L1 *newend = (struct L1 *)malloc(sizeof(struct L1));
    struct L1 *p = head;
    // trawsing node which is index is required
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    newend->data = data;
    newend->next = p->next;
    p->next = newend;

    return head;
}

struct L1 *end_insertion(struct L1 *head, int value)
{

    struct L1 *newend = (struct L1 *)malloc(sizeof(struct L1));
      struct L1 *p = head;
      while (p->next!=NULL)
      {
        p=p->next;
      }
      newend->data = value;
      p->next=newend;
      newend->next= NULL;
     
       return head;

}


struct L1 *after_insertion(struct L1 *head, struct L1  *previous , int value)
{

    struct L1 *newend = (struct L1 *)malloc(sizeof(struct L1));
       newend->data = value;
       newend->next= previous->next;
       previous->next= newend;
    
    

     
       return head;

}


int main()
{
    printf("kunal g solanki 210410107016\n");
    struct L1 *head;
    struct L1 *second;
    struct L1 *third;
    struct L1 *four;

    // create node using memory allocation
    head = (struct L1 *)malloc(sizeof(struct L1));
    second = (struct L1 *)malloc(sizeof(struct L1));
    third = (struct L1 *)malloc(sizeof(struct L1));
    four = (struct L1 *)malloc(sizeof(struct L1));

    // first node data
    head->data = 3;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 45;
    third->next = four;
    four->data = 50;
    four->next = NULL;
  
    head = Begning_Insertion(second, 23);
      printf(" begning insertion\n");
    head = Begning_Insertion(head, 34);
   
    head = intermidiate_Insertion(head, 67, 3);
     printf(" intermidiate insertion\n");

    printf("head insertion\n");
    head = end_insertion( head, 100);

        printf("after insertion\n");
    head = after_insertion(head, third, 456);
    
    display(head);

    return 0;
}

// this code by kgs

//  coed karat karat jav output jota jav 
