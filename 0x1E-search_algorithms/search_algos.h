#ifndef SORT_ALGO
#define SORT_ALGO

#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - singly
 *
 * @n: Integer
 * @index: Index of 
 * @next: Pointer 
 *
 * Description: singly  
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/*FUNCTION*/

/*ARRAYS ALGORITHMS*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

/*LINKED LIST*/
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);

/*LINKED ALGORITHMS*/
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif /*SORT_ALGO*/
