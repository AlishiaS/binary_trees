#include "binary_trees.h"                                                                                                               
                                                                                                                                        
/**                                                                                                                                     
 * *binary_tree_node - creates a binary tree node                                                                                       
 * @parent: pointer to the parent node                                                                                                  
 * @value: value to put in the new node                                                                                                 
 *                                                                                                                                      
 * Return: a pointer to the new node,                                                                                                   
 *  NULL on failure.                                                                                                                    
 */                                                                                                                                     
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)                                                                       
{                                                                                                                                       
        binary_tree_t *new;                                                                                                             
                                                                                                                                        
        new = malloc(sizeof(binary_tree_t));                                                                                            
        if (new == NULL)                                                                                                                
                return (NULL);                                                                                                          
                                                                                                                                        
        new->n = value;                                                                                                                 
        new->parent = parent;                                                                                                           
        new->left = NULL;                                                                                                               
        new->right = NULL; 

<<<<<<< HEAD
        return (new);
=======
/**
 * *binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node,
 *  NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
>>>>>>> f42d79403070c65e48417ae527851c6373f50e27
}
