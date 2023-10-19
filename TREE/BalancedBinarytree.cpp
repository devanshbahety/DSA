#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:

    int height(Node* root) {
        if (root == NULL) {
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int ans = 1 + max(leftHeight, rightHeight);
        return ans;
    }

    bool isBalanced(Node* root) {
        if (root == NULL) {
            return true;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int diff = abs(leftHeight - rightHeight);
        bool ans1 = (diff <= 1);
        //recursion
        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);
        return ans1 && leftAns && rightAns;
    }

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
};

int main() {
    Solution s; // Create an instance of the Solution class
    Node* root = s.buildTree();
    cout << s.isBalanced(root);

    return 0;
}
