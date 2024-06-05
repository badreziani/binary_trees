#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: is a pointer to the bloody root
 * Return: 0 if NULL or the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (
		binary_tree_height_v2(tree->left) - binary_tree_height_v2(tree->right));
}
