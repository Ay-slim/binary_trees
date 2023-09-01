#include "binary_trees.h"

/**
 * binary_trees_ancestor - Lowest common ancestor
 * @first: First node
 * @second: Second node
 * Return: Pointer to ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_p = (binary_tree_t *)first;
	binary_tree_t *second_p = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);
	while (first_p)
	{
		second_p = (binary_tree_t *)second;
		while (second_p)
		{
			if (first_p == second_p)
				return (first_p);
			second_p = second_p->parent;
		}
		first_p = first_p->parent;
	}
	return (NULL);
}
