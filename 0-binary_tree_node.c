#include "binary_trees.h"

/**
 * binary_tree_node - Create the binary tree node.
 * @parent: Pointer to a parent of a node to create.
 * @value: A value to put in a new node.
 *
 * Return: When the error occurs - NULL.
 *         Otherwise - the pointer to a new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
