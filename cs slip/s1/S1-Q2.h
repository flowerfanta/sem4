//  Q 2. Implement a Binary search tree (BST) library (btree.h) with operations – create, insert, preorder. Write a menu driven program that performs the above operations.
#include <stdlib.h>

struct node
{
     int data;
     struct node *left, *right;
};

struct node *newnode, *temp, *root;



struct node *create(struct node *root)
{
     int i, n, num;

     printf("how many nodes = ");
     scanf("%d", &n);

     printf("enter the data\n");

     for (i = 0; i < n; i++)
     {
          newnode = (struct node *)malloc(sizeof(struct node));
          scanf("%d", &num);

          newnode->data = num;

          newnode->left = newnode->right = NULL;

          if (root == NULL)
               root = newnode;

          else
          {
               temp = root;
               while (1)
               {
                    if (num < temp->data)

                         if (temp->left == NULL)
                         {
                              temp->left = newnode;
                              break;
                         }
                         else
                              temp = temp->left;

                    else if (temp->right == NULL)
                    {
                         temp->right = newnode;
                         break;
                    }
                    else
                         temp = temp->right;
               }
          }
     }
     return root;
}

void preorder(struct node *root)
{
     struct node *temp = root;
     if (temp != NULL)

     {
          printf("\t%d", temp->data);
          preorder(temp->left);
          preorder(temp->right);
     }
}
