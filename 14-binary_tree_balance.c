#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
