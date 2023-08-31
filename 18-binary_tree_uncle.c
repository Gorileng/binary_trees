#include "binary_trees.h"

/**
 * binary_tree_uncle - Find a uncle of the node
 *                     in the binary tree.
 * @node: Pointer to a node to find uncle of.
 *
 * Return: When node is NULL or have no uncle, NULL.
 *         Otherwise, the pointer to uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
