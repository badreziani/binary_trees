#include "binary_trees.h"
/**
 * binary_trees_ancestor - check the lowest common ancestor of 2 nodes
 * @first: the first node
 * @second: the 2nd node
 * Return: the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *a = (binary_tree_t *)first;
	binary_tree_t *b = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);

	while (a != b)
	{
		a = a ? a->parent : (binary_tree_t *)second;
		b = b ? b->parent : (binary_tree_t *)first;
	}

	return (a);
}
