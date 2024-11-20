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
    node *lc;
    int item;
    node *rc;
    int height;
};

class AVL
{
    private:
        node *root;
    protected:
        node* insertrec(node *, int);
    public:
        AVL();
        int getBF(node *);
        node* leftRotate(node*);
        node* rightRotate(node*);
        void insert(int);
        int getHeight(node*);
};

AVL::AVL()
{
    root=NULL;
}

int AVL::getBF(node *ptr)
{
    if(ptr==NULL)
        return 0;
    return getHeight(ptr->lc) - getHeight(ptr->rc);
}

int getHeight(node *p)
{
    if(p==NULL)
        return 0;
    return p->height;
}

node* AVL::leftRotate(node *A)
{
    node *B=A->rc;
    node *LC=B->lc;

    B->lc=A;
    A->rc=LC;

    //edit heights
    A->height=max(getHeight(A->lc), getHeight(A->rc))+1;
    B->height=max(getHeight(B->lc), getHeight(B->rc))+1;

    return B;
}

node* AVL::rightRotate(node *A)
{
    node *B=A->lc;
    node *RC= B->rc;

    B->rc=A;
    A->lc=RC;

    //edit heights
    A->height=max(getHeight(A->lc),getHeight(A->rc))+1;
    B->height=max(getHeight(B->lc),getHeight(B->rc))+1;

    return B;
}


int max(int a, int b)
{
    return (a>b?a:b);
}


node* AVL::insertrec(node *ptr, int data)
{
    if(ptr==NULL)
    {    
        node *n=new node;
        n->lc=NULL;
        n->item=data;
        n->rc=NULL;
        n->height=1;
        return n;
    }
    if(ptr->item > data)
        ptr->lc=insertrec(ptr->lc, data);
    if(ptr->item < data)
        ptr->rc=insertrec(ptr->rc, data);
    else  //Duplicate values not allowed
        return ptr;

    //Update height of this ancestor node
    ptr->height=1+(max(getHeight(ptr->lc), getHeight(ptr->rc)));

    /*Get the balance factor of this ancestor node to
    check whether this node became unbalanced */
    int balance=getBF(ptr);

    //If this node becomes unbalanced, then there are 4 cases
    
    if(balance<-1 && data > ptr->rc->item)       //Right Right problem
        return leftRotate(ptr);
    
    if(balance>1 && data < ptr->lc->item)       //Left Left problem
        return rightRotate(ptr);  
         
    if(balance<-1 && data < ptr->rc->item)      //Right Left Problem
    {
        ptr->rc=rightRotate(ptr->rc);
        return leftRotate(ptr);
    }

    if(balance>1 && data > ptr->lc->item)       //Left Right Problem
    {
        ptr->lc=leftRotate(ptr->lc);
        return rightRotate(ptr);
    }

    //return the unchanged node pointer
    return ptr;
}

void AVL::insert(int data)
{
    root=insertrec(root, data);
}



