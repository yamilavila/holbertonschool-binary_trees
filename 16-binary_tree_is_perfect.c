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

/**
 * binary_tree_height - measures the height
 * @tree: pointer to the root node
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_node_height;
        size_t right_node_height;

        if (tree == NULL || (tree->left == NULL && tree->right == NULL))
                return (0);
        left_node_height = binary_tree_height(tree->left);
        right_node_height = binary_tree_height(tree->right);
        if (left_node_height >= right_node_height)
                return (left_node_height + 1);
        else
                return (right_node_height + 1);
}

/**
 * binary_tree_balance - measures the balance of the binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
        int left_node_height = 0;
        int right_node_height = 0;

        if (tree == NULL)
                return (0);

        if (tree->left != NULL)
                left_node_height = binary_tree_height(tree->left) + 1;
        if (tree->right != NULL)
                right_node_height = binary_tree_height(tree->right) + 1;
        return (left_node_height - right_node_height);
}

/**
 * binary_tree_is_perfect - checks if tree is perfect ok
 * @tree: pointer to the root node
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree->left) == 0
			&& binary_tree_balance(tree->right) == 0)
	{
		if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
			return (1);
	}
	return (0);
}
