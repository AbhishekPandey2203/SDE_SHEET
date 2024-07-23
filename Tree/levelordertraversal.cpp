// find the level order traversal of the tree
#include<bits/stdc++.h>
using namespace std;


struct Node
{    
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
       data=val;
    left=NULL;
        right=NULL;
    }
};


void levelordertraversal(Node* root)
{   
    if(root==NULL)
    return;
    queue<Node*>q;

    //sabse phele root push
    q.push(root);
    //null push
    q.push(NULL);

   
        
    while(!q.empty())
    {    
        Node* val=q.front();
        q.pop();
        if(val!=NULL)
        {
             cout<<val->data<<" ";
               if(val->left)
        {
            q.push(val->left);
        }
        if(val->right)
        {
            q.push(val->right);
        }

        }
       
      else if(!q.empty())
      {
        q.push(NULL);
      } 

    }
}

int32_t main()
{
   Node* root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->left->right=new Node(5);
   root->right->left=new Node(6);
   root->right->right=new Node(7);

   //print levelorder traversal

levelordertraversal(root);
}

