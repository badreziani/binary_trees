#include "binary_trees.h"

/**
 * binary_tree_depth_v2 - measures the depth of node
 * in a binary tree
 * @tree: the binary tree to be measured
 * Return: the longest way
 */
size_t binary_tree_depth_v2(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (1 + binary_tree_depth_v2(tree->parent));
}
/**
 * binary_tree_depth - measures the depth of node
 * in a binary tree
 * @tree: the binary tree to be measured
 * Return: the longest way
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_depth_v2(tree));
}
