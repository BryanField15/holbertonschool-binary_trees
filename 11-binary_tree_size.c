#include "binary_trees.h"

/**
 * binary_tree_size - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of tree or 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_size(tree->right) + binary_tree_size(tree->left);

	return (1 + size);
}
