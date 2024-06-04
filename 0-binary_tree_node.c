#include "binary_trees.h"
/**
 * binary_tree_node - creates new tree node
 * @parent: the parnet of the node to create
 * @value: the value of the node
 * Return: a pointer to the new created node, or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
