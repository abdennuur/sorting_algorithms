#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/*Comparison of direction macros for bitonic sort*/
#define UP 0
#define DOWN 1

/*enum bool - Enumeration for the boolean values*/
/**
 * enum bool - for boolean values
 * @false: false
 * @true: true
 */
typedef enum bool
{
	false = 0,
	true
} bool;


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Int stored in  node
 * @prev: Ptr to previous element of list
 * @next: Ptr to next element of list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* swapping helper*/
void swp_ints(int *a, int *b);

/*Printing helper */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*Regular functions*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);



#endif
