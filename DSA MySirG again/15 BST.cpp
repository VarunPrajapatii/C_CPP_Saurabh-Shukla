/*
DSA through C++

Assignment-15: Tree

1. Define a class BST (Binary Search Tree) with node type pointer root as member variable. Implement Binary Search Tree using linked representation.

2. In question 1, define a constructor to initialise root pointer with NULL.

3. In question 1, define a method to check if the tree is empty.

4. In question 1, define a method to insert a new element in the BST

5. In question 1, define a method for preorder traversing of BST

6. In question 1, define a method for inorder traversing of BST

7. In question 1, define a method for postorder traversing of BST

8. In question 1, define a method to delete an element from BST

9. In question 1, define a method to search an item in the BST

10. In question 1, define a destructor to release memory of all the nodes of BST
*/


#include<stdio.h>
#include<iostream>
using namespace std;

struct node
{
    node *left;
    int item;
    node *right;
};

class BST
{
    node *root;
    protected:
        void preorderrec(node*);
        void postorderrec(node*);
        void inorderrec(node*);
        node* deleteNode(node*, int);
    public:
        BST();
        bool isEmpty();
        void insert(int);
        void preorder();
        void postorder();
        void inorder();
        void del(int);
        node* search(int);
        ~BST();
};


BST::BST()
{
    root=NULL;
}

bool BST::isEmpty()
{
    return root==NULL;
}

void BST::insert(int data)
{
    node *n=new node;
    n->left=NULL;
    n->item=data;
    n->right=NULL;
    if(root==NULL)
        root=n;
    else
    {
        node *temp=root;
        while(temp->item!=data)
        {
            if(data < temp->item)
            {
                if(temp->left!=NULL)
                    temp=temp->left;
                else
                {
                    temp->left=n;
                    break;
                }
            }
            else
            {
                if(temp->right!=NULL)
                    temp=temp->right;
                else
                {
                    temp->right=n;
                    break;
                }
            }
        }
        if(temp->item==data)
            delete n;
    }
}

void BST::preorderrec(node *ptr)
{
    if(ptr)
    {
        cout<<" "<<ptr->item;
        preorderrec(ptr->left);
        preorderrec(ptr->right);
    }
}

void BST::postorderrec(node *ptr)
{
    if(ptr)
    {
        postorderrec(ptr->left);
        postorderrec(ptr->right);
        cout<<" "<<ptr->item;
    }
}

void BST::inorderrec(node *ptr)
{
    if(ptr)
    {
        inorderrec(ptr->left);
        cout<<" "<<ptr->item;
        inorderrec(ptr->right);
    }
}

void BST::preorder()
{
    preorderrec(root);
}

void BST::postorder()
{
    postorderrec(root);
}

void BST::inorder()
{
    inorderrec(root);
}

node* BST::deleteNode(node *ptr, int data)
{
    if(ptr==NULL)
        return ptr;
    if(ptr->item > data)
        ptr->left=deleteNode(ptr->left, data);
    if(ptr->item < data)
        ptr->right=deleteNode(ptr->right, data);
    else
    {
        if(ptr->left==NULL && ptr->right==NULL)
        {
            delete ptr;
            return NULL;
        }
        if(ptr->left==NULL || ptr->right==NULL)
        {
            node *child=ptr->right?ptr->right:ptr->left;
            delete ptr;
            return child;
        }
        node *parpred=ptr, *pred=ptr->left;
        while(parpred!=NULL)
        {
            parpred=pred;
            pred=pred->right;
        }
        ptr->item=pred->item;
        if(parpred->left==pred)
            parpred->left=deleteNode(pred, pred->item);
        else if(parpred->right=pred)
            parpred->right=deleteNode(pred, pred->item);
    }
    return ptr;

}

void BST::del(int data)
{
    root=deleteNode(root, data);
}

node* BST::search(int data)
{
    node *temp=root;
    while(temp!=NULL)
    {
        if(temp->item==data)
            return temp;
        else if(data > temp->item)
            temp=temp->right;
        else
            temp=temp->left;
    }
    return temp;
}

BST::~BST()
{
    while(root)
        del(root->item);
}




