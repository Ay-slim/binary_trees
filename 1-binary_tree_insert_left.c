#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as left child
 * @parent: Pointer to parent node
 * @value: Value of child node to insert
 * Return: Pointer to inserted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;
	binary_tree_t *ex_left_node = NULL;

	if (!parent)
		return (NULL);
	new_left_node = binary_tree_node(parent, value);
	if (!new_left_node)
		return (NULL);
	ex_left_node = parent->left;
	parent->left = new_left_node;
	if (ex_left_node)
		new_left_node->left = ex_left_node;
	return (new_left_node);
}
