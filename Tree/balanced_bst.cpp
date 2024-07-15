// in this we learn about the balanced bst how to form if we have a sorted array:

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* sortedArraytobst(int arr[],int start, int end)
{    //base case

    if(start>end)
    return NULL;


    //calculating the mid
    int mid=(start+end)/2;
    //array m mid position pe jo value h uska node banyenge

    Node* root=new Node(arr[mid]);

    //recursively we make root ka left and for right also

    root->left=sortedArraytobst(arr,start,mid-1);

    //right
     root->right=sortedArraytobst(arr,mid+1,end);
    

return root;

}

//preorder
void  preorderPrint(Node* root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main()
{  
    int arr[]={10,20,30,40,50};

    Node* root=sortedArraytobst(arr,0,4);
    //printing the tree using preorder

    preorderPrint(root);
   cout<<endl;

    return 0;

}