#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node* next;
};

struct Node *first_l1, *first_l2, *last, *current;

void displayList();
void concatenate(struct Node* a, struct Node* b);


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

    concatenate(first_l1, first_l2);
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

void concatenate(struct Node* first1, struct Node* first2)
{
    if(first1 != NULL && first2!= NULL)
    {
        if(first1->next == NULL)
            first1->next = first2;
        else
            concatenate(first1->next, first2);
    }
    else
    {
        printf("One of the lists is NULL!\n");
    }
}
