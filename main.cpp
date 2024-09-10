// Binary tree
// primitives
// left, right ,EmptyTree, root, isEmpty, MakeTree

#include <iostream>
#include <stdlib.h>
using namespace std;

//tree has data, adress of right and address of left

// node
struct node
{
    int data;
    struct node *left;//address of right
    struct node *right;//address of left
};

// root
//returns a pointer to the node
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

//transversal is just the order which the tree is desribed
// traverse preorder
void traversePreOrder(struct node *temp)
{
    if (temp != NULL)
    {
        cout << " " << temp->data;
        traversePreOrder(temp->left);
        traversePreOrder(temp->right);
    }
}

// Traverse Inorder
void traverseInOrder(struct node *temp) {
  if (temp != NULL) {
    traverseInOrder(temp->left);
    cout << " " << temp->data;
    traverseInOrder(temp->right);
  }
}

// Traverse Postorder
void traversePostOrder(struct node *temp) {
  if (temp != NULL) {
    traversePostOrder(temp->left);
    traversePostOrder(temp->right);
    cout << " " << temp->data;
  }
}

int main() {
  struct node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);

  cout << "preorder traversal: ";
  traversePreOrder(root);
  cout << "\nInorder traversal: ";
  traverseInOrder(root);
  cout << "\nPostorder traversal: ";
  traversePostOrder(root);
}