#include "binary_trees.h"

/**
 * binary_tree_height - Function to calculate the height of a bin tree
 * @tree: The tree whose height to calculate
 * Return: Tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int l_height = 0;
	unsigned int r_height = 0;
	binary_tree_t *l_tr = (binary_tree_t *)tree;
	binary_tree_t *r_tr = (binary_tree_t *)tree;

	if (!tree)
		return (0);
	while (r_tr)
	{
		if (!r_tr)
			break;
		r_height++;
		r_tr = r_tr->right;
	}
	while (l_tr)
	{
		if (!l_tr)
			break;
		l_height++;
		l_tr = l_tr->left;
	}
	if (l_height > r_height)
		return (l_height - 1);
	return (r_height - 1);
}
