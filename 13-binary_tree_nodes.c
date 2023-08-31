#include "binary_trees.h"

/**
 * binary_tree_nodes - Count a nodes with 1 child in the  binary tree.
 * @tree: Pointer to a root node of a tree to count a number of nodes.
 *
 * Return: When tree is NULL, function should return 0, else return the node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
