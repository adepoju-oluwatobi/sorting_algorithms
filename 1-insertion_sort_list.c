#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list using the Insertion sort.
 * @list: Linked List.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *swap, *last;

	if (!list || !*list)
		return;

	node = *list;
	while (node->next)
	{
		if ((node->n) > (node->next->n))
		{
			swapper(node, node->next, list);
			last = node;
			node = node->prev;
			while (node->prev)
			{
				swap = node;
				if ((swap->n) < (swap->prev->n))
				{
					swapper(node->prev, swap, list);
				} else
				{
					break;
				}
			}
			node = last;
		} else
		{
			node = node->next;
		}
	}
}
/**
 * swapper - Swap nodes.
 * @lt: Left.
 * @rgt: Right
 * @list: List
 */
void swapper(listint_t *lt, listint_t *rgt, listint_t **list)
{
	listint_t *temp;

	temp = lt->prev;
	if (temp)
		temp->next = rgt;
	else
		*list = rgt;

	rgt->prev = temp;
	lt->prev = rgt;
	lt->next = rgt->next;
	rgt->next = lt;
	if (lt->next)
		lt->next->prev = lt;

	print_list(*list);
}
