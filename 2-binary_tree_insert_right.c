#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that insert right-child node
 * @parent: pointer to the new node
 * @value: store value in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);

	new_right_node = malloc(sizeof(binary_tree_t));
	if (new_right_node == NULL)
		return (NULL);

	new_right_node->parent = parent;
	new_right_node->n = value;
	new_right_node->left = NULL;
	new_right_node->right = parent->right;

	if (new_right_node->right != NULL)
		new_right_node->right->parent = new_right_node;
	parent->right = new_right_node;
	return (new_right_node);
}
