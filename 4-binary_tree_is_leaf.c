#include "binary_trees.h"

/**
 * recursive_leaf - Recursive function to transverse tree
 * @c_node: Current node in trasversal
 * @f_node: Node to compare against
 * Return: 1 if leaf, 0 otherwise
 */
int recursive_leaf(const binary_tree_t *c_node, const binary_tree_t *f_node)
{
	int left_null;
	int right_null;
	int equality;

	if (!c_node)
		return (0);
	left_null = c_node->left == NULL;
	right_null = c_node->right == NULL;
	equality = f_node == c_node;
	if (left_null && right_null && equality)
		return (1);
	if (recursive_leaf(c_node->left, f_node))
		return (1);
	return (recursive_leaf(c_node->right, f_node));
}

/**
 * binary_tree_is_leaf - Check if a btree node is a leaf
 * @node: Node to check
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (recursive_leaf(node, node));
}
