#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a binary tree
 * @tree: Binary tree parent to delete
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
