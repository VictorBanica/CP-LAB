#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* next;};

struct Node *first, *last, *current;

void displayList();
int GetNth(int index);

int main()
{
    int nb_elements;
    int i;
    int ind;
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

    printf("\n\nInput the index for the node to be shown: ");
    scanf("%i", &ind);

    printf("\nThe data of the node at given index is: %i", GetNth(ind));
}


int GetNth(int index)
{
    int cnt = 0;
    current = first;
    while(cnt < index)
    {
        current = current->next;
        cnt++;
    }

return current->info;
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
