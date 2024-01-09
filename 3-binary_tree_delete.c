#include "binary_trees.h"

/**
* binary_tree_delete - Deletes a binary tree
* @tree: tree to delete
* @value: Value of the node
* Return: Binary tree with right node inserted
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
