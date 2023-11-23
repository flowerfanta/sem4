//    Q 2. Write a program which uses binary search tree library and counts the total nodes and
//    totalleaf nodes in the tree.
//    int countLeaf(T) – returns the total number of leaf nodes from BST.




#include <stdio.h>
#include <stdlib.h>
#include "S4-Q2.h"

void main()
{
   struct node *root = NULL;
   int choice, cnt, leaf;

   while (1)
   {
      printf("\n1)create \n2)traverse \n3)count leaf nodes \n4)count total nodes");

      printf("\nenter the choice = ");
      scanf("%d", &choice);

      switch (choice)
      {
      default:
         printf("\ninvalid choice");
         break;


      case 1:
         root = create(root);
         break;


      case 2:
        printf("\npreorder traverse is =   ");
         preorder(root);

         printf("\ninorder traverse is =   ");
         inorder(root);

         printf("\npostorder traverse is = ");
         postorder(root);
         break;



      case 3:
        leaf = countleaf(root);
         if (leaf == -1)
            printf("\nthe are no leaf nodes in the tree");
         else
            printf("\nthe total leaf nodes in the tree are %d", leaf);
         break;


       case 4:
        cnt = countnodes(root);
         if (cnt == NULL)
            printf("\nthere are no nodes in the tree");
         else
            printf("\nthe total nodes in the tree are %d", cnt);
         break;
      }
   }
}
