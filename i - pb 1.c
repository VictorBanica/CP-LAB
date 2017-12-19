#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* next;};

struct Node *first, *last, *current;

void displayList();
int count(int nr);

int main()
{
    int nb_elements;
    int i, number;
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

    printf("\n\nInput number to count apparitions: ");
    scanf("%i", &number);
    printf("\nThe number %i occurs in the list %i times.", number, count(number));

}

int count(int nr)
{
    int count = 0;
    current = first;
    while(current)
    {
        if(current->info == nr) count++;
        current = current->next;
    }
    return count;
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
