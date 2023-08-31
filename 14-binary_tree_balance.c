#include "binary_trees.h"

/**
 * binary_tree_balance - Measure a balance factor of the binary tree.
 * @tree: Pointer to a root node of a tree to measure balance factor.
 *
 * Return: When tree is NULL, return 0, else return the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measure a height of the binary tree.
 * @tree: Pointer to a root node of a tree to measure height.
 *
 * Return: When tree is NULL, function should return 0, else return the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
