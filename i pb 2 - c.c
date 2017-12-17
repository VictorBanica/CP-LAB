#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* next;
    struct Node* prev};

struct Node *first, *last, *current;

void displayList();

int main()
{
    int nb_elements;
    int i;
    printf("Input number of elements: ");
    scanf("%i", &nb_elements);
    printf("\n");

    first = NULL;
    last = NULL;
    for(i = 0; i < nb_elements; ++i)
    {
        current = (struct Node*)malloc(sizeof(struct Node));

        printf("Input node number %i: ", i);
        scanf("%i", &current->info);
        current->next = NULL;
        current->prev = last;

        if(first == NULL)
        {
            first = current;
            last = current;
        }
        else{
            last->next = current;
            last = current;
        }

       first -> prev = last;
       last -> next = first;
    }

    displayList();

}

void displayList()
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
