#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data = data;
        left=NULL;
        right = NULL;
    }

};
Node* buildTree() {
        int data;
        cout << "Enter the data: " << endl;
        cin >> data;

        if (data == -1) {
            return NULL;
        }

        Node* root = new Node(data);

        cout << "Enter data for the left part of " << data << " node" << endl;
        root->left = buildTree();

        cout << "Enter data for the right part of " << data << " node" << endl;
        root->right = buildTree();

        return root;
    }

int convertsumtree(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftans=convertsumtree(root->left);
    int rightans=convertsumtree(root->right);
    root->data=root->data+leftans+rightans;
    return root->data;
}

void inOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    Node* root = buildTree(); // Create a binary tree
    convertsumtree(root);    // Convert the binary tree into a sum tree
    cout << "In-order traversal of the sum tree: ";
    inOrderTraversal(root);  // Print the elements of the sum tree
    return 0;
}