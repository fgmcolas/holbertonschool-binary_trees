#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: NULL if no uncle or struct
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandfather;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandfather = node->parent->parent;

	if (grandfather->left && grandfather->left != node->parent)
		return (grandfather->left);

	if (grandfather->right && grandfather->right != node->parent)
		return (grandfather->right);
	return (NULL);
}
