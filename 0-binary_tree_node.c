 #include "binary_trees.h"

/**
 * Write a function that creates a binary tree node
 * @parent:pointer parent binary trees
 * @value: value new node
 * nnode: for new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode;

	if (value == '\0')
		return (NULL);

	nnode = malloc(sizeof(binary_tree_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = value;
	nnode->parent = parent;
	nnode->left = NULL;
	nnode->right = NULL;

	return (nnode);
}
