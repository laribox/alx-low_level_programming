#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

/**
 * struct listint_s - Singly linked list node
 *
 * @n: Integer value stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 *
 * Description: Structure defining a node in a singly linked list.
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list node with an express lane
 *
 * @n: Integer value stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 * @express: Pointer to the next node in the express lane
 *
 * Description: Structure defining a node in a singly linked list
 * with an additional express lane pointer for optimized search.
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/* Function prototypes for various search algorithms */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
