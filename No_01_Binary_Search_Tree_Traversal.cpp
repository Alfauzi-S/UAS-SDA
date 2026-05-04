#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    
    return root;
}

void inorderTraversal(Node* root) {
    if (root == nullptr) return;
    
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root) {
    if (root == nullptr) return;
    
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
    if (root == nullptr) return;
    
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = nullptr;
    
    cout << "Building BST with 11 nodes: 50, 30, 70, 20, 40, 60, 80, 10, 25, 35, 45\n";
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);
    insert(root, 10);
    insert(root, 25);
    insert(root, 35);
    insert(root, 45);

    cout << "\nIn-Order Traversal: ";
    inorderTraversal(root);
    
    cout << "\nPre-Order Traversal: ";
    preorderTraversal(root);
    
    cout << "\nPost-Order Traversal: ";
    postorderTraversal(root);
    
    return 0;
}