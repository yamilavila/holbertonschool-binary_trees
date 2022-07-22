#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the siblind of a node
 * @node: pointer to the node to find the sibling
 * Return: 0
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	uncle_node = binary_tree_sibling(node->parent);
	if (uncle_node == NULL)
		return (NULL);
	return (uncle_node);
}
