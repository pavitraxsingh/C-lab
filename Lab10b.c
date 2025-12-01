//2.Write a program to insert item in middle of the linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *newnode, *temp;

    
    for(int i = 1; i <= 3; i++) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->data = i * 10;   
        newnode->next = NULL;

        if(head == NULL)
            head = newnode;
        else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }

    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = 25;

    temp = head;
    for(int i = 1; i < 2; i++)   // position = 2
        temp = temp->next;

    newnode->next = temp->next;
    temp->next = newnode;

    // Printing  updated list
    printf("Updated Linked List: ");
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}


