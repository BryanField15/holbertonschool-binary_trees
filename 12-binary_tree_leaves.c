#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 * Return: leaf count or 0 if NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	leaf_count = binary_tree_leaves(tree->right) +
		binary_tree_leaves(tree->left);

	return (leaf_count);
}
