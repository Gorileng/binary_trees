#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert the node as left-child 
 *                           of another in the binary tree.
 * @parent: Pointer to a node to insert left-child in.
 * @value: value to store the new node.
 *
 * Return: When a parent is NULL or the error occurs - NULL.
 *         Otherwise - Pointer to new node.
 *
 * Description: When a parent already have a left-child, a new node
 *              takes it's place then the old left-child is set as
 *              a left-child of a new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
