//   Q 1. Implement a Binary search tree (BST) library (btree.h) with operations – create, insert,
//   inorder. Write a menu driven program that performs the above operations.




#include <stdio.h>
#include <stdlib.h>
#include "S10-Q1.h"

void main()
{
   struct node *root = NULL;
   int choice;

   while (1)
   {
      printf("\n1)create \n2)in-order");

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
         printf("\ninorder traverse is =   ");
         inorder(root);
         break;
      }
   }
}
