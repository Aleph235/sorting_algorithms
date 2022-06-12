#include "sort.h"
#include <stdlib.h>

void insert_front(listint_t **head, listint_t *p1)
{
	p1->next = (*head);
	p1->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = p1;
	(*head) = p1;

}
void insert_after(listint_t *prev_node, listint_t *p1)
{
	p1->prev->next = p1->next;
	p1->next->prev = p1->prev;

	if (p1->next != NULL)
		p1->next->prev = p1;
	else
		p1->next->prev = NULL;
}
/**
 * insertion_sort_list - insert sort list
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i;
	listint_t *j;
	int data;

	data = 0;
	if (list == NULL || (*list)->next == NULL)
		return;

	i = *list;

	while (i->next != NULL)
	{
		data = i->n;
		j = i->next;
		while (j->prev != NULL && data <= j->n)
		{
			if (i->prev == NULL)
				insert_front(list, j);
			insert_after(i, j);
			j = j->prev;
		}
		i = i->next;
		print_list(*list);
		}
}
