#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node:  is a pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	grandparent = node->parent->parent;
	uncle = NULL;

	if (grandparent->left == node->parent)
	{
		uncle = grandparent->right;
	}
	else
	{
		uncle = grandparent->left;
	}
	return (uncle);
}
