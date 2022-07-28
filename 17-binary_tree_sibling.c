#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling of
 * Return: pointer to the sibling of the node or NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *parent;

    if (!node || !node->parent)
        return (NULL);
    parent = node->parent;
    if (parent->left == node)
        return (parent->right);
    else
        return (parent->left);
}
