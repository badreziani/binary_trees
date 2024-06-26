#include "binary_trees.h"
/**
 * binary_tree_node - this function creates a binary tree node
 * @parent: is the parent node of the node to create
 * @value: is the value to put in the new node
 * when created a node does not have any child
 * Return: NULL failure or the new node if we successeded
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
