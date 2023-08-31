#include "binary_trees.h"

/**
 * binary_tree_depth - Measure a depth of the node in the binary tree.
 * @tree: Pointer to a node to measure depth.
 *
 * Return: When a tree is NULL, function should return 0, else return a depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
