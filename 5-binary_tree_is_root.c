#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is the root
 * @node: Pointer to node to check
 * Return: 0 if not root, 1 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
