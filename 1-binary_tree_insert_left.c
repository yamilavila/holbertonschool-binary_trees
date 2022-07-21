#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a new node as the left-child
 * @parent: pointer to the new node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);
	new_left_node = binary_tree_node(parent, value);
	if (new_left_node == NULL)
		return (NULL);
	if (parent->left != NULL)
		new_left_node->left = parent->left;
	parent->left->parent = new_left_node;
	parent->left = new_left_node;
	
	return (new_left_node);
}
