// .h file for S 10 Q 1!!!



#include <stdlib.h>

struct node
{
     int data;
     struct node *left, *right;
};

struct node *newnode, *temp;

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




void inorder(struct node *root)
{
     struct node *temp = root;

     if (temp != NULL)
     {
          inorder(temp->left);
          printf("\t%d", temp->data);
          inorder(temp->right);
     }
}
