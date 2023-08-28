#include "binary_trees.h"

/**
 * binary_tree_preorder - Preorder traversal
 * @tree: Pointer to tree root
 * @func: Function to execute
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
