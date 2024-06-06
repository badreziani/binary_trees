#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: A pointer to the root node of the tree to rotate
 *
 * Return: A pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right_child;

	if (!tree || !tree->right)
		return (tree);

	right_child = tree->right;
	tree->right = right_child->left;
	if (right_child->left)
		right_child->left->parent = tree;
	right_child->left = tree;
	right_child->parent = tree->parent;
	tree->parent = right_child;
	return (right_child);
}
