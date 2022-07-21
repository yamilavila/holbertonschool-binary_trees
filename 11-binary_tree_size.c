#include "binary_trees.h"
/**
 * binary_tree_size - measures the size
 * @tree: pointer to the root node ot the tree
 * Return: 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_tree = 1;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		if (tree->left)
			size_tree += binary_tree_size(tree->left);
		if (tree->right)
			size_tree += binary_tree_size(tree->right);
	}
	return (size_tree);
}
