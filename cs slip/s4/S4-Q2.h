// .h file of slip 4 question 2!!!


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

void postorder(struct node *root)
{
     struct node *temp = root;

     if (temp != NULL)
     {
          postorder(temp->left);
          postorder(temp->right);
          printf("\t%d", temp->data);
     }
}





int countnodes(struct node *root)
{
     struct node *temp = root;
     static int count = 0;

     if (temp == NULL)
          return NULL;

     if (temp != NULL)

          count++;
     countnodes(temp->left);
     countnodes(temp->right);

     return count;
}




int countleaf(struct node *root)
{
     struct node *temp = root;
     static int count = 0;

     if (temp == NULL)
          return -1;

     if (temp != NULL)
     {
          if ((temp->left == NULL) && (temp->right == NULL))
               count++;
          countleaf(temp->left);
          countleaf(temp->right);
     }

     return count;
}
