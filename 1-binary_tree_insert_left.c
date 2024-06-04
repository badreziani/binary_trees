#include "binary_trees.h"
/**
 * binary_tree_insert_left - this function inserts a node as the left child of
 * another node
 * @parent: is a pointer to the node to the node which the new node will be
 * inserted in
 * @value: is the value to store in the new node
 * Return: the new node or NULL On failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);
	if (new_left_node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new_left_node;
		return (new_left_node);
	}

	new_left_node->left = parent->left;
	new_left_node->left->parent = new_left_node;
	parent->left = new_left_node;
	return (new_left_node);
>>>>>>> ab8e15056277eb51302bb200031b8741c51926ee
}
