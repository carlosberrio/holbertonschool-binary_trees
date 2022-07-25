#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the depth of
 * Return: the depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t count = 0;
    if (tree == NULL)
    {
        return 0;
    }
    while (tree->parent)
    {
        count++;
        tree = tree->parent;
    }
    return count;
}
