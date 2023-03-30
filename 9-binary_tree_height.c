#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lh = 0, rh = 0;

		lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lh > rh) ? lh : rh);
	}
	return (0);
}
