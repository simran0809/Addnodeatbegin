#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function prototype declaration
struct node * add_at_beginning(struct node *head, int data);

 int main() {
    // First, create the head of the linked list
struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;  // Initial data for the head node
    head->link = NULL;


    // Add  node to test the functionality
     head = add_at_beginning(head, 100);
     head = add_at_beginning(head, 190);

    // Print the linked list to verify the results
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    } 

    return 0;
}

// Function to add a node at the beginning  of the linked list
struct node *add_at_beginning(struct node *head, int data) {
    struct node *ptr;
    

    // Create a new node at beginning need to be insetered .
    
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    // ptr->link = NULL;
    ptr->link = head; 
     return ptr;
    }
