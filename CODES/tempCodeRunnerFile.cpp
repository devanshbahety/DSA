#include<iostream>

using namespace std;

class solution{
    public:
    bool isbalanced(TreeNode* root)
    {
        //base case
        if(root==NULL)
        {
            return true;
        }
        //case 1
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int diff=abs(leftheight-rightheight);
        

        bool ans1=(diff<=1);

        //recursion
        bool leftans =isbalanced(root->left);
        bool rightans=isbalanced(root->right);
        if(ans1 && leftans && rightans)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{


    return 0;
}