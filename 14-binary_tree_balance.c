#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left == NULL)
	{
		return (1 + binary_tree_height(tree->right));
	}

	if (tree->right == NULL)
	{
		return (1 + binary_tree_height(tree->left));
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
	{
		return (1 + height_left);
	}
	else
		return (1 + height_right);
}

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

	if (!tree)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (!tree->left)
	{
		left_height = -1;
	}
	if (!tree->right)
	{
		right_height = -1;
	}

	return (left_height - right_height);
}
