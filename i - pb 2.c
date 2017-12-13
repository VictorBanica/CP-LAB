#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* next;};

struct Node *first, *last, *current;

void createSimpleLinkedList(struct Node* first, int nb_elements);
void displayList(struct Node* first);

int main()
{
    int nb_elements;
    int i;
    printf("Input number of elements: ");
    scanf("%i", &nb_elements);

    createSimpleLinkedList(first, nb_elements);
    printf("%i", first->info);
    displayList(first);
}


void createSimpleLinkedList(struct Node* first, int nb_elements)
{
    first = NULL;
    int i;
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
}

void displayList(struct Node* first)
{
    current = first;
    while(current->next != NULL)
    {
        printf("%i  ", current->info);
        current = current -> next;
    }
}
