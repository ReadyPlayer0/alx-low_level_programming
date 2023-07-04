Singly Linked Lists
This project provides a set of functions to work with singly linked lists in C. It includes operations such as creating a linked list, adding nodes, printing the list, reversing the list, finding a loop in the list, and freeing the memory.

Getting Started
To use these functions in your project, follow the steps below:

Download the lists.h header file and place it in your project directory.

Include the lists.h header file in your source files where you want to use the linked list functions.

c
Copy code
#include "lists.h"
Compile your program with the source files that use the linked list functions.
bash
Copy code
gcc main.c list_functions.c -o program
Run the compiled program.
bash
Copy code
./program
Available Functions
1. print_listint
c
Copy code
size_t print_listint(const listint_t *head);
This function prints all the elements of a linked list.

Parameters:

head: Pointer to the head of the linked list.
Returns:

The number of nodes in the linked list.
2. add_nodeint
c
Copy code
listint_t *add_nodeint(listint_t **head, int n);
This function adds a new node at the beginning of a linked list.

Parameters:

head: Pointer to a pointer to the head of the linked list.
n: Value to be stored in the new node.
Returns:

Pointer to the newly added node.
3. free_listint
c
Copy code
void free_listint(listint_t *head);
This function frees the memory allocated for a linked list.

Parameters:
head: Pointer to the head of the linked list.
4. print_listint_safe
c
Copy code
size_t print_listint_safe(const listint_t *head);
This function prints the elements of a linked list, even if there is a loop in the list.

Parameters:

head: Pointer to the head of the linked list.
Returns:

The number of nodes in the linked list.
5. free_listint_safe
c
Copy code
size_t free_listint_safe(listint_t **head);
This function frees the memory allocated for a linked list, even if there is a loop in the list.

Parameters:

head: Pointer to a pointer to the head of the linked list.
Returns:

The number of nodes in the linked list that were freed.
6. find_listint_loop
c
Copy code
listint_t *find_listint_loop(listint_t *head);
This function finds the starting node of a loop in a linked list.

Parameters:s

head: Pointer to the head of the linked list.
Returns:

Pointer to the node where the loop starts, or NULL if there is no loop.
Examples
c
Copy code
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    
    /* Create a linked list */
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    
    /* Print the list */
    printf("Linked list: ");
    print_listint(head);
    
    /* Free the list */
    free_listint(head);
    
    return 0;
}