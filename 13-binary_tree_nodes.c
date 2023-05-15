#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: pointer to the root node of the tree to count the nodes
 * Return: node count or 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		node_count = 1 + binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left);
	}
	return (node_count);
}
