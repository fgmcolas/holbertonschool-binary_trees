#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: pointer to the root of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
			if (binary_tree_is_perfect(tree->left))
				if (binary_tree_is_perfect(tree->right))
					return (1);
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree : Node to measure
 * Return: The height of the tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);
	return ((height_l > height_r ? height_l : height_r) + 1);
}
