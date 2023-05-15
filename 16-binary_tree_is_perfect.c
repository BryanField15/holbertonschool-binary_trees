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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if it is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if ((left_height - right_height) != 0)
	{
		return (0);
	}
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
