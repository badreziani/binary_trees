#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a given node is a root
 * @node: the node to check
 * Return: 1 if node 0 if not and if NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->right && !node->left)
		return (1);
	else
		return (0);
}
