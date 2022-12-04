#include<stdio.h>
#include<stdlib.h>

// create datatype:

struct ND
{
    int data;
    struct ND* next;
};


// insert data in begining 

 struct ND *insert_begning (struct ND* first , int data  )
 {
      
   
    // create new node in memory
     struct ND * newnd ;
     newnd =  ( struct ND*)  malloc ( sizeof( struct ND));
      if ( first == NULL){

          first = newnd;

    }  // giove  address
      else
      {
        newnd->next= first;
        first= newnd;
      }

      return first;


 }

  void display( ){
     
    if(first == NULL )
    {  
         printf(" empty list");



    }

       struct ND * current  ;
       current = first;
       while (current!=NULL)
       { 
             printf("%d", current->data);
            current=current->next;
       }
       


  }



int main()
{ 

 struct ND* first;
 first = insert_begning( first , 45);
 display( );

}