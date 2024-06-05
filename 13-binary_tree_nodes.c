#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes in the binary tree with one child.
 * @tree: is a pointer to the root node of the tree.
 * Return: 0 if tree == NULL or the Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->right && !tree->left)
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
