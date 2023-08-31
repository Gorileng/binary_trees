#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if the node is the root of the binary tree.
 * @node: Pointer to a node to check.
 *
 * Return: When a node is the root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
