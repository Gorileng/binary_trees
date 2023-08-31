#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check when the node is the leaf of the binary tree.
 * @node: Pointer to a node to check.
 *
 * Return: When a node is the leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
