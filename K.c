#include <stdio.h>
#include <stdlib.h>

struct Nd
{
    int data;
    struct Nd *next;
};
// insertion at begning  in the node;
struct Nd *insertbeg_v1(struct Nd *first, int value)
{
    struct Nd *newd;
    newd = (struct Nd *)malloc(sizeof(struct Nd));
    if (newd == NULL)
    {
        printf("some Error \n");
        return NULL;
    }

    // assing field

    newd->data = value;
    newd->next = NULL;

    if (newd == NULL)
    {
        first = newd;
    }
    else
    {
        newd->data = value;
        newd->next = first;
        first = newd;
    }

    return newd;
}

// insert node at intermideate

struct Nd *insertintermideate_v1(struct Nd *first, int value, int index)
{
    struct Nd *newd;

    newd = (struct Nd *)malloc(sizeof(struct Nd));
    struct Nd *p = first;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    newd->data = value;
    newd->next = p->next;
    p->next = newd;

    return newd;
}

// insert in last  node

struct Nd *insertinlast_v1(struct Nd *first, int value)
{
    struct Nd *newd, = NULL;

    newd = (struct Nd *)malloc(sizeof(struct Nd));

    while (first->next != NULL)
    {

        first = first->next;
    }

    newd->data = value;
    first->next = newd;
    newd->next = NULL;

    return first;
}

// traver the node
void show(struct Nd *first)
{
    struct Nd *current;
    first = current;
    if (first == NULL)
    {
        printf(" empty List");
    }

    for (current = first; current != NULL; current = current->next)
    {
        printf("%d\n", current->data);
    }
}

int main()
{
    struct Nd *first = NULL;

    first = insertbeg_v1(first, 789);
    first = insertbeg_v1(first, 800);
    first = insertbeg_v1(first, 688);
    first = insertbeg_v1(first, 899);

    first = insertintermideate_v1(first, 459, 1);

    show(first);
}