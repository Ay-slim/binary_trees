#include "binary_trees.h"

/**
 * calc_size - Recursor to determine no of leaves
 * @tree: Input tree
 * Return: size t size
 */
size_t calc_size(const binary_tree_t *tree)
{
	unsigned int size = 0;
        if (!tree)
                return (0);

	if (!tree->right && !tree->left)
	{
		size = 1;
	}
	else
	{
		size += calc_size(tree->left);
		size += calc_size(tree->right);
	}
	return (size);
}

/**
 * binary_tree_leaves - Calculate no oftree leaves
 * @tree: Tree whose size to calculate
 * Return: 0 or treesize
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (calc_size(tree));
}
