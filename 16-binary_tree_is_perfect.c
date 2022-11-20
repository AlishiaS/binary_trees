#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: If tree is NULL, your function must return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (!(tree->right) && !(tree->left))
return (1);
if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
return (binary_tree_is_perfect(tree->left)
&& binary_tree_is_perfect(tree->right));
return (0);
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height.
* Return: none.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height_l;
size_t height_r;

if (tree == NULL)
return (0);

height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (height_l > height_r ? height_l : height_r);
}
