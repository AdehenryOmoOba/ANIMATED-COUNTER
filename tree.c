#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int value;
  struct node *left;
  struct node *right;
} node;

void print_tree(node *root);
void free_memory(node *root);

int main(void)
{

  // create root node
  node *tree = NULL;

  node *n = malloc(sizeof(node));

  if(n == NULL)
  {
    return 1;
  };

  n->value = 2;
  n->left = NULL;
  n->right = NULL;

  tree = n;

  //create left node
  n = malloc(sizeof(node));

  if(n == NULL)
  {
    return 1;
  };

  n->value = 1;
  n->left = NULL;
  n->right = NULL;

  tree->left = n;

  //create right node
  n = malloc(sizeof(node));

  if(n == NULL)
  {
    return 1;
  };

  n->value = 3;
  n->left = NULL;
  n->right = NULL;

  tree->right = n;

  printf("Printing tree...\n");
  
  // print tree
  print_tree(tree);

  // free memory storing all nodes
  free_memory(tree);

};

void print_tree(node *root)
{
  if(root == NULL)
  {
    return;
  }

  print_tree(root->left);
  printf("%i\n", root->value);
  print_tree(root->right);

};

void free_memory(node *root)
{
  if(root == NULL)
  {
    return;
  }

  free_memory(root->left);
  free_memory(root->right);
  free(root);

};