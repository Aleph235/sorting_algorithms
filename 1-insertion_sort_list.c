#include "sort.h"

/**
 * insertion_sort_list - insert sort list
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;


	while (list != NULL)
	{
		listint_t *current = *list;
		*list = (*list)->next;
		if (head == NULL || current->n < head->n)
		{
			current->prev = head;
			head = current;
		}
		else
		{
			listint_t *p = head;

			while (p != NULL)
			{
				if (p->next == NULL || current->n < p->next->n)
				{
					current->next = p->next;
					p->next = current;
					break;
				}
				p = p->next;
			}
		}

	}
}
