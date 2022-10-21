#include "lists.h"
#include <string.h>
/**
 * add_node - Adds node at the beginning of list_t 
 * @head: Apoiter at head of list_t
 * @str: Strring to be added to list_t
 * Return: If address fails - NULL
 * else - the locaionn of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new = NULL)
		
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
/**
 * _strlen - counts the length of a string
 * @str: string to be counted
 * Return: the length of the string
 */

int _strlen(const char *str)
{
		int i = 0;
		while (str[i] != '\0')
			i++;

		return (i);
}
