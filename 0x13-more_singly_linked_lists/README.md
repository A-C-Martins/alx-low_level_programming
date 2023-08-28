--0x13. C - More singly linked lists--

Project 0x13

TASK
--Note--
Problem for all the tasks below has been solved in the files in this Directory

--More Info--
Please use this data structure for this project:

```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```


0. Print list
mandatory
Write a function that prints all the elements of a listint_t list.

Prototype: ``size_t print_listint(const listint_t *h);``
Return: the number of nodes
Format: see example
You are allowed to use ``printf
```
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
julien@ubuntu:~/0x13. More singly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/0x13. More singly linked lists$ 

```

1. List length
mandatory
Write a function that returns the number of elements in a linked ``listint_t list``.

Prototype: ``size_t listint_len(const listint_t *h);``

```
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b
julien@ubuntu:~/0x13. More singly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x13. More singly linked lists$ 

```

2. Add node
mandatory
Write a function that adds a new node at the beginning of a ``listint_t list``.

Prototype: ``listint_t *add_nodeint(listint_t **head, const int n);``

Return: the address of the new element, or NULL if it failed

```
julien@ubuntu:~/0x13. More singly linked lists$ cat 2-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
julien@ubuntu:~/0x13. More singly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x13. More singly linked lists$ 

```

3. Add node at the end
mandatory
Write a function that adds a new node at the end of a ``listint_t list``.

Prototype: ``listint_t *add_nodeint_end(listint_t **head, const int n);``

Return: the address of the new element, or NULL if it failed
```
julien@ubuntu:~/0x13. More singly linked lists$ cat 3-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    return (0);
}
julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
julien@ubuntu:~/0x13. More singly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x13. More singly linked lists$ 

```

4. Write a function that frees a listint_t list.

Prototype: ``void free_listint(listint_t *head);``

5. Free
mandatory
Write a function that frees a listint_t list.

Prototype: ``void free_listint2(listint_t **head);``
The function sets the head to NULL

6. Pop
mandatory
Write a function that deletes the head node of a ``listint_t`` linked list, and returns the ``head`` node’s data ``(n)``.

Prototype: ``int pop_listint(listint_t **head);``
if the linked list is empty return ``0``

7. Get node at index
mandatory
Write a function that returns the nth node of a listint_t linked list.

Prototype: ``listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);``

where index is the index of the node, starting at 0
if the node does not exist, return NULL

8. Sum list
mandatory
Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: ``int sum_listint(listint_t *head);``
if the list is empty, return 0

9. Insert
mandatory
Write a function that inserts a new node at a given position.

Prototype: ``listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);``
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or ``NULL if it failed
if it is not possible to add the new node at index ``idx, do not add the new node and return NULL

10. Delete at index
mandatory
Write a function that deletes the node at index index of a ``listint_t`` linked list.

Prototype: ``int delete_nodeint_at_index(listint_t **head, unsigned int index);``

where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed


11. Reverse list
#advanced
Write a function that reverses a listint_t linked list.

Prototype: ``listint_t *reverse_listint(listint_t **head);``

Returns: a pointer to the first node of the reversed list
You are not allowed to use more than 1 loop.
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
julien@ubuntu:~/0x13. More singly linked lists$ cat 100-main.c 

12. Print (safe version)
#advanced
Write a function that prints a listint_t linked list.

Prototype: ``size_t print_listint_safe(const listint_t *head);``
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format: see example

13. Free (safe version)
#advanced
Write a function that frees a listint_t list.

Prototype: ``size_t free_listint_safe(listint_t **h);``
This function can free lists with a loop
You should go though the list only once
Returns: the size of the list that was free’d
The function sets the head to NULL
