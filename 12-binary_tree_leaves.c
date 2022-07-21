#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves of the tree
 * @tree: pointer to the root node of the tree to count the # of leaves
 * Return: 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t node_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			node_leaves += 1;
		node_leaves += binary_tree_leaves(tree->left);
		node_leaves += binary_tree_leaves(tree->right);
	}
	return (node_leaves);
}
