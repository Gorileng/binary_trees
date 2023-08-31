#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts the node as a right-child
 *                            of another in the binary tree.
 * @parent: Pointer to a node to insert a right-child in.
 * @value: A value to store a new node.
 *
 * Return: When a parent is NULL or the error occurs - NULL.
 *         Otherwise - pointer to a new node.
 *
 * Description: When a parent already have a right-child, a new node
 *              takes it's place then the old right-child is set as
 *              a right-child of a new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
