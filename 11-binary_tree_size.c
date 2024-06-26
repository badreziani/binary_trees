#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the binary tree to be measured
 * Return: the longest way
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (count);
}
