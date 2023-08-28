#include "binary_trees.h"

/**
 * binary_tree_node - Function to create a binary tree node
 * @parent: pointer to parent node
 * @value: Node value
 * Return: Pointer to created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
