#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree in order
 * @tree: pointer to the root node of the tree to traverse
 * @func: function to call on each node.
 * Description: traverse a binary tree in order,
 * starting from the leftmost node and going to the right
 * until the end of the tree is reached.
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}
