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

void inorder_recorrido(struct node* raiz) {
   if(raiz != NULL) {
        //Código
        inorder_recorrido(raiz->left);
        printf("\n %i", raiz->value);
        inorder_recorrido(raiz->right);
       
   }
}
int main() {
   int i;
   int array[7] = {300, 27, 14, 10, 19, 31, 42 };


   for(i = 0; i < 7; i++)
      insert(array[i]);


    printf("\nInorder: ");
    inorder_recorrido(root);
}






  


