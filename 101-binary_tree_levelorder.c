#include "binary_trees.h"
/**
 * binary_tree_levelorder - that function goes through a binary tree using
 * level-order-traversal
 * @tree: is the root of the tree.
 * @func: is the print function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	
	binary_tree_t *a = tree->right;
	binary_tree_t *b = tree->left;

	func(tree->right->n);
	a = a->right;
	func(tree->left->n);
	b = b->left;
}
