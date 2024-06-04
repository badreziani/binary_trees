#include "binary_trees.h"
/**
 * binary_tree_insert_right - this function inserts a node as the right child
 * another node
 * @parent: is a pointer to the node to the node which the new node will be
 * inserted in
 * @value: is the value to store in the new node
 * Return: the new node or NULL On failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_right_node = binary_tree_node(parent, value);
	if (new_right_node == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new_right_node;
		return (new_right_node);
	}

	new_right_node->right = parent->right;
	new_right_node->right->parent = new_right_node;
	parent->right = new_right_node;
	return (new_right_node);
}
