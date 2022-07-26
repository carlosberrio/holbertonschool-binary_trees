#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size of
 * Return: the number of nodes in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		leaves++;
	leaves += binary_tree_nodes(tree->left);
	leaves += binary_tree_nodes(tree->right);
	return (leaves);
}
