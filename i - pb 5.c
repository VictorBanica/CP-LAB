#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* next;};

struct Node *first, *last, *current;

void displayList();
int Sum();

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
    printf("\n\nThe sum of all the elements is: %i", Sum());
}

int Sum()
{
    int s = 0;
    current = first;
    while(current->next)
        {s = s + current->info;
        current = current->next;}
    s = s + last->info;
    return s;
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
