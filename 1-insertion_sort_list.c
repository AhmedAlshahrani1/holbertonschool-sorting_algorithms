#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: Double pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *swap, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr != NULL)
	{
		swap = curr;
		curr = curr->next;

		while (swap->prev != NULL && swap->n < swap->prev->n)
		{
			prev = swap->prev;

			prev->next = swap->next;
			if (swap->next != NULL)
				swap->next->prev = prev;

			swap->prev = prev->prev;
			swap->next = prev;

			if (prev->prev != NULL)
				prev->prev->next = swap;
			else
				*list = swap;

			prev->prev = swap;

			print_list(*list);
		}
	}
}
