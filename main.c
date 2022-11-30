#include <stdio.h>
#include <stdlib.h>

struct element
{
    int data;
    struct element* next;
};
struct element *first = NULL;
void insert(int x)
{
    struct element*newnd;
    newnd=(struct element*)malloc(sizeof(struct element));
    newnd->data=x;
    newnd->next=NULL;
    if(first==NULL)
    {
        first=newnd;
    }
    else
    {
        newnd->next=first;
        first=newnd;
    }
}
void display()
{
    if(first==NULL)
    {
        printf("Empty");
    }
    else{
        struct element* current;
        current=first;
        while(current!=NULL)
            {
                printf("%d\n",current->data);
                current=current->next;
            }
    }

}
int main()
{

 
    insert(9);
    insert(54);
    insert(11);
    insert(83);
    display();
}
