#include "binary_trees.h"
/**
 * binary_tree_depth - measures the dept of a node
 * @tree: pointer to the node to measure the dept
 * Return: 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent != NULL)
		return (0);
	{
	depth = 1 + binary_tree_dept(tree->parent);
	return (depth);
	}
	return (0);
}
