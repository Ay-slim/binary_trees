#include "binary_trees.h"

/**
 * binary_tree_uncle - Find node uncle
 * @node: Node whose sibling to find
 * Return: Nothing
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *g_parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	g_parent = parent->parent;
	if (parent == g_parent->left)
		return (g_parent->right);
	return (g_parent->left);
}
