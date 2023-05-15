#include "binary_trees.h"
/**
 *binary_tree_is_full -checks if tree is full
 *@tree: Pointer to the root node of the tree
 *Return: 1 if full or 0 if not full
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full;
	int right_full;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);

		if (left_full == 1 && right_full == 1)
		{
			return (1);
		}
	}
	return (0);
}
