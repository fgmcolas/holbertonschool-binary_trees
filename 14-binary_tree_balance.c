#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree : Node to measure
 * Return: The height of the tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t height_l;
		size_t height_r;

		height_l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		height_r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return (height_l > height_r ? height_l : height_r);
	}
	return (0);
}
