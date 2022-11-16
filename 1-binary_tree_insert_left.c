#include "binary_trees.h"

/**
 * *binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 * 
 * Return: NULL on failure or if parent is NULL,
 *  pointer to the created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

	if (parent == NULL_)
		return NULL;

	new = binary_tree_node(parent, value)
	if (new == NULL)
		return NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = new;
	}

	parent->left = new;

	return (new);
}