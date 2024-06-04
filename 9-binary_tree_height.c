#include "binary_trees.h"

/**
 * binary_tree_height_v2 - measures the height of a binary tree
 * @tree: the binary tree to be measured
 * Return: the longest way
 */
size_t binary_tree_height_v2(const binary_tree_t *tree)
{
	size_t c_left, c_right;

	if (tree == NULL)
		return (-1);
	c_left = 1 + binary_tree_height_v2(tree->left);
	c_right = 1 + binary_tree_height_v2(tree->right);
	if (c_left > c_right)
		return (c_left);
	return (c_right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the binary tree to be measured
 * Return: the longest way
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_v2(tree));
}
