#include "binary_trees.h"

/**
 * binary_tree_sibling - Find a sibling of the 
 *                       node in the binary tree.
 * @node: Pointer to a node to find sibling of.
 *
 * Return: When node is NULL or there's no sibling - NULL.
 *         Otherwise - The pointer to a sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
