#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    size_t leaves = 0;

    if (tree == NULL)
        return (0);

    leaves = binary_tree_height(tree->left);
    leaves = binary_tree_height(tree->right);

    return ();
}
