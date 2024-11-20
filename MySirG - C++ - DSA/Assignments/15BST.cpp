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


#include<iostream>
#include<stdio.h>
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
        void preorderrec(node *);
        void inorderrec(node *);
        void postorderrec(node *);
        node* deleteNoderec(node *, int);
    public:
        BST();
        bool isEmpty();
        void insert(int);
        void preorder();
        void inorder();
        void postorder();
        void deleteNode(int);
        node* search(int);

        ~BST();

};

BST::BST()
{
    root=NULL;
}

bool BST::isEmpty()
{
    return !root;
}

void BST::insert(int data)
{
    node *n=new node;
    n->item=data;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL)
        root=n;
    else
    {
        node *ptr= root;
        while(n->item!=ptr->item)
        {
            if(n->item < ptr->item)
            {
                if(ptr->left!=NULL)
                    ptr=ptr->left;
                else
                {
                    ptr->left=n;
                    break;
                }                
            }
            else
            {
                if(ptr->right!=NULL)
                    ptr=ptr->right;
                else
                {
                    ptr->right=n;
                    break;
                }
            }
        }
        if(n->item==ptr->item)
            delete n;
    }
}

void BST::preorderrec(node *ptr)
{
    cout<<endl<<" "<<ptr->item;
    preorderrec(ptr->left);
    preorderrec(ptr->right);
}

void BST::preorder()
{
    preorderrec(root);
}

void BST::inorderrec(node *ptr)
{
    inorderrec(ptr->left);
    cout<<endl<<" "<<ptr->item;
    inorderrec(ptr->right);
}

void BST::inorder()
{
    inorderrec(root);
}

void BST::postorderrec(node *ptr)
{
    postorderrec(ptr->left);
    postorderrec(ptr->right);
    cout<<endl<<" "<<ptr->item;
}

void BST::postorder()
{
    postorderrec(root);
}

node* BST::deleteNoderec(node* ptr, int data)
{
    if(ptr==NULL)
        return NULL;
    if(data>ptr->item)
        ptr->left=deleteNoderec(ptr->right, data);
    else if(data<ptr->item)
        ptr->right=deleteNoderec(ptr->right, data);
    else
    {
        //no child
        if(ptr->left==NULL && ptr->right==NULL)
        {
            delete ptr; 
            return NULL;
        }
        //single child
        if(ptr->left==NULL || ptr->right==NULL)
        {
            node *child=ptr->left?ptr->left:ptr->right;
            delete ptr;
            return child;
        }
        //two children
        node *pred, *parpred;
        pred=ptr;
        parpred=ptr->left;
        while(pred->right!=NULL)
        {
            parpred=pred;
            pred=pred->right;
        }
        ptr->item=pred->item;
        if(parpred->right==pred)
            parpred->right=deleteNoderec(pred, pred->item);
        else if(parpred->left==pred)
            parpred->left=deleteNoderec(pred, pred->item);
    }
    return ptr;
}

void BST::deleteNode(int data)
{
    root=deleteNoderec(root, data);
}

node* BST::search(int data)
{
    node *ptr=root;
    while(ptr)
    {
        if(ptr->item==data)
            return ptr;
        if(data < ptr->item)
            ptr=ptr->left;
        else
            ptr=ptr->right;
    }
    return ptr;
}

BST::~BST()
{
    while(root)
        deleteNode(root->item);
}
