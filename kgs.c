#include<stdio.h>
#include<stdlib.h>

struct Nd
{
    int data ;
    struct Nd* next ;
};
 // insertion the node 

 struct  Nd* insertbeg_v1( struct Nd *first , int value)
 { struct Nd* newd;
   newd = ( struct  Nd*) malloc(sizeof(struct Nd));
  if(newd==NULL)
  { 
     printf("some Error \n");
     return NULL;
  }

  // assing field

  newd->data=value;
  newd->next= NULL;

  if( newd==NULL)
  {
    first=newd;
  }
  else
  {
    newd->next=first;
    first=newd;
  }

  return  newd;
    

 }


 int   show (struct Nd* first)
 {
     struct Nd * current;
     first= current;
     if( first == NULL)
     {
        printf(" empty List");
         return 0;
     }

      while ( current!=NULL)
      { 
        printf("%d ",current->data );
        current= current->next;
      }
      

 }

int main ()
{  
    struct Nd* first =NULL;

    
     
     show(first);
     
    

}