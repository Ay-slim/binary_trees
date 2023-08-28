#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as right child
 * @parent: Pointer to parent node
 * @value: Value of child node to insert
 * Return: Pointer to inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;
	binary_tree_t *ex_right_node = NULL;

	if (!parent)
		return (NULL);
	new_right_node = binary_tree_node(parent, value);
	if (!new_right_node)
		return (NULL);
	ex_right_node = parent->right;
	parent->right = new_right_node;
	if (ex_right_node)
		new_right_node->right = ex_right_node;
	return (new_right_node);
}
