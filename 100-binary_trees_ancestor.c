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
	binary_tree_t *a;
	binary_tree_t *b;

	if (!first || !second)
		return (NULL);
	a = first;
	b = second;

	while (a != b)
	{
		if (a)
			a = a->parent;
		else
			a = second;
		if (b)
			b = b->parent;
		else
			b = first;
	}
	return (a);
}
