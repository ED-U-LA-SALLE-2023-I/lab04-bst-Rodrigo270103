#include <stdio.h>
#include <stdlib.h>


struct node {
    int value;
    struct node *left;
    struct node *right;
};


struct node *root = NULL;

void insert(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *actual;
   struct node *padre;

tempNode->value = data;
   tempNode->left = NULL;
   tempNode->right = NULL;


  


