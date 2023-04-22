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

if(root == NULL) {
        //Codigo
        root = tempNode;
        actual = tempNode;
        padre = tempNode;
   } else {
        //Codigo
        actual = root;
        padre = NULL;


      while(1) {
         padre = actual;
         //recorrido por la izquierda del árbol


         if(data < padre->value) {
           //Codigo
           actual = actual->left;


            //insertamos en izquierda
            if(actual == NULL) {
               //Codigo
               padre->left = tempNode;
               return;
            }
         }
         //recorrido por la derecha del árbol
         else {
                //Codigo
                actual = actual->right;
            //insertamos en derecha
            if(actual == NULL) {
                //Codigo
                padre->right = tempNode;
                return;
            }
         }
      }
   }
}

  


