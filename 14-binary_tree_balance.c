#include "binary_trees.h"
/**
 * height - returns the height of tree
 * @tree: the tree
 * Return: the height
 */
size_t height(const binary_tree_t *tree)
{
	size_t c_left, c_right;

	if (tree == NULL)
		return (-1);
	c_left = 1 + height(tree->left);
	c_right = 1 + height(tree->right);
	if (c_left > c_right)
		return (c_left);
	return (c_right);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: is a pointer to the bloody root
 * Return: 0 if NULL or the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));
}
