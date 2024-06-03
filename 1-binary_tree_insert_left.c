#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node
 * as the left-child of another node
 * 
 * @parent: the parnet of the node to create
 * @value: the value of the node
 * Return: a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (!parent)
		return (NULL);
	if (!parent->left)
	{
		printf("--- 1 ---\n");
		parent->left = binary_tree_node(parent, value);
		printf("--- 2 ---\n");
		printf("{%d}\n", parent->left->n);
		return (parent->left);
	}
	left_node = binary_tree_node(parent, value);
	if (!left_node)
		return (NULL);
	left_node->left = parent->left;
	parent->left = left_node;
	return (left_node);
}
