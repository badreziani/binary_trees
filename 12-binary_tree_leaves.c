#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in the binary tree.
 * @tree: is a pointer to the root node of the tree.
 * Return: 0 if tree == NULL or the Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->right && !tree->left && tree->parent)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
