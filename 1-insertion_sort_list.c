#include "sort.h"
#include <stdlib.h>
#include <stdbool.h>
/**
 * insert_front - insert in front of list
 * @list : pointer to head of list
 * @node : pointer to node to be inserted
 * Return: void
 */
void insert_front(listint_t **list, listint_t *node)
{
	node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	(*list)->prev = node;
	node->next = *list;
	node->prev = NULL;
	(*list) = node;

}
/**
 * insert_before - insert before of next_node
 * @next_node : pointer to last bigger than node node node node
 * @node : pointer to node to be inserted before next node
 * Return: void
 */
void insert_before(listint_t *next_node, listint_t *node)
{
	node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	next_node->prev->next = node;
	node->prev = next_node->prev;
	next_node->prev = node;
	node->next = next_node;
}
/**
 * insertion_sort_list - insert sort list
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	bool insert;
	listint_t *i, *j, *i_suivant;


	if (list == NULL || (*list)->next == NULL || *list == NULL)
		return;

	insert = false;
	i = (*list)->next;
	while (i)
	{
		if (i->n < i->prev->n)
		{
			insert = true;
			j = i;
			i_suivant = i->next;
		}
		else
			i = i->next;
		while (j && insert)
		{
			if (j->n < i->n)
			{
				insert_before(j->next, i);
				i = i_suivant;
				insert = false;
			}
			j = j->prev;
		}
		if (insert)
		{
			insert_front(list, i);
			i = i_suivant;
			insert = false;
		}
		print_list(*list);
	}
}
