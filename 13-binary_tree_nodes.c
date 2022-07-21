#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the # of nodes
 * Return: 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left)
			num_nodes += binary_tree_nodes(tree->left);
		if (tree->right)
			num_nodes += binary_tree_nodes(tree->right);
		num_nodes += 1;
	}
	return (num_nodes);
}
