#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate node depth
 * @tree: Tree whose depth to calculate
 * Return: 0 or node depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *tr = (binary_tree_t *)tree;
	unsigned int depth = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	while (tr)
	{
		tr = tr->parent;
		depth++;
	}
	return (depth - 1);
}
