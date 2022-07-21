#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a new node as the left-child
 * @parent: pointer to the new node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node, *tmp;

	if (!parent)
		return (NULL);
	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
		return (new_left_node);
	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node = NULL;

	tmp = parent->left;
	parent->left = new_left_node;
	if (tmp)
		tmp->parent = new_left_node;
	new_left_node = tmp;
	return (new_left_node);
}
