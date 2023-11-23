//  Q 2. Implement a Binary search tree (BST) library (btree.h) with operations – create, insert, preorder. Write a menu driven program that performs the above operations.


#include <stdio.h>
#include <stdlib.h>
#include "S1-Q2.h"

void main()
{
   struct node *root = NULL, *root1 = NULL, *root2 = NULL, *cpy, *mirr, *del;
   int choice;

   while (1)
   {
      printf("\n1)create & insert \n2)pre-order");

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
         break;
      }
   }
}
