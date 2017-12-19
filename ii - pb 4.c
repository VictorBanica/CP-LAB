#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node* next;
};

struct Node *first_l1, *first_l2, *last, *current;

void displayList();
void append(struct Node* a, struct Node* b);
void deleteList();


int main()
{
    int nb_elements, i;
    printf("Number of elements in the first list: ");
    scanf("%d", &nb_elements);
    printf("\n");

    first_l1 = NULL;
    for(i = 0; i < nb_elements; ++i)
    {
        current = (struct Node*)malloc(sizeof(struct Node));

        printf("Input node number %i: ", i);
        scanf("%i", &current->info);
        current->next = NULL;

        if(first_l1 == NULL)
        {
            first_l1 = current;
            last = current;
        }
        else{
            last->next = current;
            last = current;
        }
    }

    printf("\n\nNumber of elements in the second list: ");
    scanf("%d", &nb_elements);
    printf("\n");

    first_l2 = NULL;
    for(i = 0; i < nb_elements; ++i)
    {
        current = (struct Node*)malloc(sizeof(struct Node));

        printf("Input node number %i: ", i);
        scanf("%i", &current->info);
        current->next = NULL;

        if(first_l2 == NULL)
        {
            first_l2 = current;
            last = current;
        }
        else{
            last->next = current;
            last = current;
        }
    }

    append(first_l1, first_l2);
    deleteList();
    displayList();

    return 0;
}

void displayList()
{
    printf("\nDisplaying the list... \n");
    current = first_l1;
    while(current->next != NULL)
    {
        printf("%i  ", current->info);
        current = current -> next;
    }

    printf("%i", last->info);
}

void append(struct Node* first1, struct Node* first2)
{
    if(first1 != NULL && first2!= NULL)
    {
        if(first1->next == NULL)
            first1->next = first2;
        else
            append(first1->next, first2);
    }
    else
    {
        printf("One of the lists is NULL!\n");
    }
}

void deleteList()
{
   current = first_l2;
   struct Node* nextNode = NULL;

   while (current != NULL)
   {
       nextNode = current->next;
       free(current);
       current = nextNode;
   }
   free(nextNode);
   first_l2 = NULL;
}
