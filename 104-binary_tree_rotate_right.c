#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: A pointer to the root node of the tree to rotate
 *
 * Return: A pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left_child;

	if (!tree || !tree->left)
		return (tree);

	left_child = tree->left;
	tree->left = left_child->right;

	if (left_child->right)
		left_child->right->parent = tree;

	left_child->right = tree;
	left_child->parent = tree->parent;
	tree->parent = left_child;
	return (left_child);
}
