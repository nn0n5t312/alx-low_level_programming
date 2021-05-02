#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a list
 * @h: pointer to head of list
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while ( h!= NULL)
	{
		count++;
		h = h->next;
	}
	return count;
}
