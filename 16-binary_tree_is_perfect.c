#include "binary_trees.h"

/**
 * binary_tree_full - Postorder traversal
 * @tree: Pointer to tree root
 * Return: 0 or 1
 */
int binary_tree_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (1);
	return (binary_tree_full(tree->left)
			&& binary_tree_full(tree->right));
}

/**
 * binary_tree_h - Function to calculate the height of a bin tree
 * @tree: The tree whose height to calculate
 * Return: Tree height
 */
size_t binary_tree_h(const binary_tree_t *tree)
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

/**
 * binary_tree_is_perfect - Checks perfection
 * @tree: Tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_is_full;
	int right_is_full;
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);
	left_is_full = binary_tree_full(tree->left);
	right_is_full = binary_tree_full(tree->right);
	left_height = binary_tree_h(tree->left);
	right_height = binary_tree_h(tree->right);

	if (!tree)
		return (0);
	if (left_is_full && right_is_full && (left_height == right_height))
		return (1);
	return (0);
}
