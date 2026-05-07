#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: Double pointer to the head of the linked list
 *
 * Description: Swaps the nodes themselves (not the values).
 * Prints the list after every swap.
 */
void insertion_sort_list(listint_t **list)
{
	int i, j;
	int key = lest->next;

	if (list == NULL)
	{
		return;
	}
	i = 1;
	while (list->next != NULL)
	{
		j = 0;
		while (list->prev != NULL && list->prev->n > list->n)
		{
			list->next = list-> prev;
			list->prev = NULL;
			list->next->next =  


	
