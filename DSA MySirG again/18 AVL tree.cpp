/*DSA through C++

Assignment-18: AVL Tree

1. Define a class AVL, with node type pointer root as member variable. Implement AVL tree using linked representation

2. In question 1, define constructor to initialise member variable.

3. In question 1, define a method to get balance factor of a node.

4. In question 1, define a method leftRotate for anticlockwise rotation

5. In question 1, define a method rightRotate for clockwise rotation

6. In question 1, define a method to insert new element in the tree

7. In question 1, define a method to delete an element from the tree

8. In question 1, define preorder traversal

9. In question 1, define postorder traversal

10. In question 1, define inorder traversal

11. In question 1, define destructor to release memory.

12. In question 1, define a search method to find the element in the tree.

*/


#include<iostream>
#include<stdio.h>
using namespace std;


struct node
{
    node *left;
    int item;
    node *right;
    int height;
};

class AVL
{
    node *root;
    protected:
        node* insertion(node*, int);
        node* deletion(node*, int);
        node* minValueNode(node*);
        void preorderrec(node*);
        void inorderrec(node*);
        void postorderrec(node*);
    public:
        AVL();
        int getBalanceFactor(node*);
        int getHeight(node*);
        void insert(int);
        node* rightRotate(node*);
        node* leftRotate(node*);
        void del(int);
        void preorder();
        void inorder();
        void postorder();
        ~AVL();
        node *search(int);

};

AVL::AVL()
{ root=NULL; }

int AVL::getBalanceFactor(node *ptr)
{
    if(ptr==NULL)
        return 0;
    return getHeight(ptr->left) - getHeight(ptr->right);
}

int AVL::getHeight(node *ptr)
{
    if(ptr==NULL)
        return 0;
    return ptr->height;
}

node* AVL::leftRotate(node* A)
{
    node *B=A->right;
    node *LC=B->left;

    A->right=LC;
    B->left=A;

    A->height=max(getHeight(A->left), getHeight(A->right))+1;
    B->height=max(getHeight(B->left), getHeight(B->right))+1;
    return B;
}

node* AVL::rightRotate(node *A)
{
    node *B=A->left;
    node *RC=B->right;

    A->left=RC;
    B->right=A;

    A->height=max(getHeight(A->left), getHeight(A->right))+1;
    B->height=max(getHeight(B->left), getHeight(B->right))+1;
    return B;

}

node* AVL::minValueNode(node *t)
{
    node *current=t;
    while(current->left!=NULL)
        current=current->left;    
    return current;
}

node* AVL::insertion(node *ptr, int data)
{
    node *n;
    if(ptr==NULL)
    {
        n->left=NULL;
        n->item=data;
        n->right=NULL;
        n->height=1;
        return n;
    }
    if(data<ptr->item)  
        ptr->left=insertion(ptr->left, data);
    else if(data>ptr->item)
        ptr->right=insertion(ptr->right, data);
    else
        return ptr;

    ptr->height=1+max(getHeight(ptr->left), getHeight(ptr->right));

    int balance=getBalanceFactor(ptr);

    if(balance>1 && data < ptr->left->item)
        return rightRotate(ptr);
    if(balance<-1 && data > ptr->right->item)
        leftRotate(ptr);
    if(balance>1 && data > ptr->left->item)
    {
        ptr->left=leftRotate(ptr->left);
        return rightRotate(ptr);
    }
    if(balance<-1 && data < ptr->right->item)
    {
        ptr->right=rightRotate(ptr->right);
        return leftRotate(ptr);
    }
    return ptr;
}

node* AVL::deletion(node *ptr, int data)
{
    if(ptr==NULL)
        return ptr;
    else if(data < ptr->item)
        ptr->left=deletion(ptr->left, data);
    else if(data > ptr->item)
        ptr->right=deletion(ptr->right, data);
    else
    {
        if(ptr->left==NULL || ptr->right==NULL)
        {
            node *temp=ptr->right?ptr->right:ptr->left;
            if(temp==NULL)
            {
                temp=ptr;
                ptr=NULL;
            }
            else
                ptr=temp;
            delete temp;
        }
        else
        {
            node *temp=minValueNode(ptr->right);

            ptr->item=temp->item;
            ptr->right=deletion(temp, temp->item);
        }
    }
    return ptr;

    if(ptr==NULL)
        return ptr;
    
    ptr->height=1+max(getHeight(ptr->left), getHeight(ptr->right));

    int balance=getBalanceFactor(ptr);

    if(balance>1 && data<ptr->left->item)
        return leftRotate(ptr);
    if(balance>1 && data>ptr->left->item)
    {
        ptr->left=leftRotate(ptr->left);
        return rightRotate(ptr);
    }
    if(balance<-1 && data>ptr->right->item)
        return rightRotate(ptr);
    if(balance<-1 && data<ptr->right->item)
    {
        ptr->right=rightRotate(ptr->right);
        return leftRotate(ptr);
    }

    return ptr;
}

void AVL::insert(int data)
{
    root=insertion(root, data);
}

void AVL::del(int data)
{
    root=deletion(root, data);
}

void AVL::preorderrec(node *ptr)
{
    if(ptr)
    {
        cout<<" "<<ptr->item;
        preorderrec(ptr->left);
        preorderrec(ptr->right);

    }
}

void AVL::inorderrec(node *ptr)
{
    if(ptr)
    {
        inorderrec(ptr->left);
        cout<<" "<<ptr->item;
        inorderrec(ptr->right);
    }
}

void AVL::postorderrec(node *ptr)
{
    if(ptr)
    {
        postorderrec(ptr->left);
        postorderrec(ptr->right);
        cout<<" "<<ptr->item;
    }
}

void AVL::preorder()
{
    preorderrec(root);
}

void AVL::inorder()
{
    inorderrec(root);
}

void AVL::postorder()
{
    postorderrec(root);
}

AVL::~AVL()
{
    while(root)
        del(root->item);
}

node* AVL::search(int data)
{
    node *temp=root;
    while(temp!=NULL)
    {
        if(temp->item==data)
            return temp;
        else if(temp->item<data)
            temp=temp->right;
        else
            temp=temp->left;
    }
    return temp;
}


int max(int a, int b)
{
    return (a>b?a:b);
}




