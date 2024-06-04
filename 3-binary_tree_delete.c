#include "binary_trees.h"
/**
 * binary_tree_delete - delets an entire binary tree
 * @tree: is teh tree that we are going to free
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
