#include<iostream>

using namespace std;

// Created a node class
class Node {
    public:

    int data, height;
    Node *left, *right;
    
    Node(int value) {
        data = value;
        height = 1;
        left = right = NULL;
    }
};

// It tells the height of the node
int getHeight(Node *root) {
    if(root == NULL) {
        return 0;
    }
    return root->height;
}

// It sends the balance factor of the node
int getBalance(Node *root) {
    return getHeight(root->left) - getHeight(root->right);
}

//Defined Rotations
Node* rightRotation(Node *root) {
    Node *child = root->left;
    Node *cR = child->right;

    child->right = root;
    root->left = cR;

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));

    return child;
}

Node* leftRotation(Node *root) {
    Node *child = root->right;
    Node *cL = child->left;

    child->left = root;
    root->right = cL;

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));

    return child;
}

Node* insert(Node *root, int key) {
    // When root doesnt exist
    if(root == NULL) {
        return new Node(key);
    }

    // Finding the correct position to insert
    if(key < root->data) {
        root->left = insert(root->left, key);
    } else if(key > root->data) {
        root->right = insert(root->right, key);
    } else {
        return root; // Duplicate keys are not allowed
    }
    
    // After we have inserted the node, then start backtracking. 
    // Update height of the current node
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // Check balance factor
    int balance = getBalance(root);

    //Unbalance happened
    if(balance > 1) {
        // LL case
        if(key < root->left->data) {
            return rightRotation(root);
        } else { // LR case
            root->left = leftRotation(root->left);
            return rightRotation(root);
        }
    } else if(balance < -1) {
        // RR case
        if(key > root->right->data) {
            return leftRotation(root);
        } else { // RL case
            root->right = rightRotation(root->right);
            return leftRotation(root);
        }
    } else {
        // No unbalance
        return root;
    }
}


Node* deletion(Node *root, int key) {
    if(!root) return NULL;

    // If 
    if(root->data > key) {
        root->right = deletion(root->right, key);
    } else if(root->data < key) {
        root->left = deletion(root->left, key);
    } else {
        return root;
    }

    // Update height

    // Check balanced factor

    //Rotations

}



int main() {
    Node *root = NULL;

    root = insert(root, 10);
    root = insert(root, 50);
    root = insert(root, 95);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 25);
    root = insert(root, 100);
    root = insert(root, 85);



    return 0;
}