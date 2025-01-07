#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

//Definition of Struct information
struct listCounter
{
    int data;
    struct listCounter *next;
};

//Generates random number between one and defined MAX
int createRandomNumber(){
    return rand() % (MAX + 1);
}

//Adds head to list, or add new link to the end of the list
void addNewLink(struct listCounter **head, int data){
    struct listCounter *newLink = (struct listCounter*)malloc(sizeof(struct listCounter));
    struct listCounter *previousLink = *head;
    newLink->data = data;
    newLink->next = NULL;

    if(*head == NULL)
    {
        *head = newLink;
        return;
    }

    while(previousLink->next != NULL)
    {
        previousLink = previousLink->next;
        
    }
    previousLink->next = newLink;
};

//Counts the number of links in the linked list
int countLinks(struct listCounter *head){
    int cnt = 0;
    struct listCounter *current = head; 

    while(current != NULL)
    {
        cnt++;
        current = current->next;
    }

    return cnt;
}

//Start Main
int main(){
    srand(time(0));
    int num = createRandomNumber();
    printf("The random number generated is %d.\n", num);
    struct listCounter *head = NULL;
    for(int i = 0;i < num;i++)
    {
        addNewLink(&head, i);
    }
    int linkCount = countLinks(head);
    printf("The total number of Links in the list is %d.\n", linkCount);
}

