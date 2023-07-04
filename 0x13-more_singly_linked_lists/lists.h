#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure definition for a singly-linked list */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes */
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, int n);
void free_listint(listint_t *head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

#endif /* LISTS_H */
