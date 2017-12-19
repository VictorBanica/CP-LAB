#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* next;};

struct Node *first, *last, *current;

void displayList();
void deleteList();

int main()
{
    int nb_elements;
    int i;
    printf("Input number of elements: ");
    scanf("%i", &nb_elements);
    printf("\n");

    first = NULL;
    for(i = 0; i < nb_elements; ++i)
    {
        current = (struct Node*)malloc(sizeof(struct Node));

        printf("Input node number %i: ", i);
        scanf("%i", &current->info);
        current->next = NULL;

        if(first == NULL)
        {
            first = current;
            last = current;
        }
        else{
            last->next = current;
            last = current;
        }
    }

    displayList();
    deleteList();
    displayList();

}

void deleteList()
{
   current = first;
   struct Node* nextNode = NULL;

   while (current != NULL)
   {
       nextNode = current->next;
       free(current);
       current = nextNode;
   }
   free(nextNode);
   first = NULL;

   printf("\n\nThe list has been deleted!");
}


void displayList()
{
    if(first != NULL)
    {
        printf("\nDisplaying the list... \n");
        current = first;
        while(current->next != NULL)
        {
            printf("%i  ", current->info);
            current = current -> next;
        }
    printf("%i", last->info);
    }
    else
        printf("\n\nThe list is NULL!");
}
