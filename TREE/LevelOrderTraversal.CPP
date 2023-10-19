#include<iostream>
#include<queue>
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

Node* buildTree()
{
    int data;
    cout<<"enter the data: "<<endl;
    cin>>data;

    if(data==-1)
    {
        return NULL;
    }
    //STEP A, B and C

    Node* root=new Node(data);

    cout<< "Enetr data for left part of "<<data<<"node"<<endl;
    root->left = buildTree();

    cout<<"Enetr data for right part of "<<data<<"node"<<endl;
    root->right = buildTree();

    return root;
}

void levelordertraversal(Node* root)
{
    queue<Node*>q;
    //initially
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
        //A
        Node* temp=q.front();
        //B
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
        
        //C
        cout<<temp->data<<" ";
        //D
        if(temp->left)
        {
            q.push(temp->left);

        }
        if(temp->right)
        {
            q.push(temp->right);
        } 
        }
      

    }
}

void inordertraversal(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }

    //LNR
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);

}

void preordertraversal(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }

    //NLR
    cout<<root->data<<" ";
    preordertraversal(root->left);
    
    preordertraversal(root->right);
 
}

void postordertraversal(Node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }

    //LRN
     postordertraversal(root->left);
    
    postordertraversal(root->right);
    cout<<root->data<<" ";
   
 
}

int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    int ans= max(leftheight,rightheight)+1;
    return ans;
}

int diameteroftree(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int op1=diameteroftree(root->right);
    int op2=diameteroftree(root->left);
    int op3=height(root->left)+height(root->right);
    int ans = max(op1,max(op2,op3));
    return ans;

}



int main()
{
    Node* root=NULL;
    root=buildTree();

levelordertraversal(root);
cout<<"height: "<<height(root)<<endl;
cout<<"diameter : "<<diameteroftree(root);
    return 0;
}