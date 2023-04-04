#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * Return: address of the node where the loop starts.Else NULL - No loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *dog;

	cat = dog = head;
	while (cat && dog && dog->next)
	{
		cat = cat->next;
		dog = dog->next->next;
		if (cat == dog)
		{
			cat = dog;
			break;
		}
	}
	if (!cat || !dog || !dog->next)
		return (NULL);
	while (cat != dog)
	{
		cat = cat->next;
		dog = dog->next;
	}
	return (hare);
}
