#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to find the uncle of|
 * Return: pointer to the uncle of @node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *parent;
    binary_tree_t *grandparent;

    if (node == NULL || node->parent == NULL)
        return (NULL);
    parent = node->parent;
    grandparent = parent->parent;
    if (grandparent == NULL)
        return (NULL);
    if (grandparent->left == parent)
        return (grandparent->right);
    else
        return (grandparent->left);
}
