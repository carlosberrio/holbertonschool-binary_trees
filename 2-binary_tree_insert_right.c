#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of a node
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 * Return: pointer to the new node or NULL if it failed
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (!parent)
        return (NULL);

    new_node = malloc(sizeof(binary_tree_t));
    if (!new_node)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    if (parent->right)
        parent->right->parent = new_node;
    new_node->right = parent->right;
    parent->right = new_node;

    return (new_node);
}