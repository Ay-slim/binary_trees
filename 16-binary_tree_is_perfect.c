#include "binary_trees.h"

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
	left_is_full = binary_tree_is_full(tree->left);
	right_is_full = binary_tree_is_full(tree->right);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (!tree)
		return (0);
	if (left_is_full && right_is_full && (left_height == right_height))
		return (1);
	return (0);
}
