#include<stdio.h>
#include<stdlib.h>

struct element
{
   int data;
   struct element* next;
   
   
};

struct element *first =NULL;

void insert (int x)
{
    struct element*newd;
    newd = ( struct element*)malloc(sizeof(struct element));
    newd->data=x;
    newd->next=NULL;
    if(first=NULL){
       first=newd;
    }
    else
    {
         newd->next=first;
        first=newd;
    }
}
void display ()
{
    if(first=NULL)
    {
        printf("empty");
    }
    else
    {
        struct element* current;
        current=first;
        while (current!=NULL)
        {
            printf("%d\n ", current->data);
            current= current->next;
        }
        
    }
}


int main()
{
     printf("210410107011\n");
    insert(9);
    insert(54);
    insert(11);
    insert(83);
    display();
}

