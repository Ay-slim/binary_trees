#include "binary_trees.h"

/**
 * calc_size - Recursor to determine size
 * @tree: Input tree
 * Return: size t size
 */
size_t calc_size(const binary_tree_t *tree)
{
	unsigned int size = 0;

	if (!tree)
		return (0);
	size += calc_size(tree->left);
	size += calc_size(tree->right);
	return (size + 1);
}

/**
 * binary_tree_size - Calculate tree size
 * @tree: Tree whose size to calculate
 * Return: 0 or treesize
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (calc_size(tree));
}
