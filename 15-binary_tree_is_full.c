#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int node_left_side;
	int node_right_side;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	node_left_side = binary_tree_is_full(tree->left);
	node_right_side = binary_tree_is_full(tree->right);

	if (node_right_side == 0 || node_left_side == 0)
		return (0);
	else
		return (1);
}
