// The whole code approach is by me --i'm not cheat it from anyone ur optimal approach is valuable 
//GFG: . The task is to left-shift the linked list by k nodes,
//  where k is a given positive integer smaller than or equal to length of the linked list

#include<bits/stdc++.h>
using namespace std;

//forming a linkedlist structure

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{

public:
 Node* rotate(Node* head, int k)
    {
        
      // approach move till the k
        
        Node* temp1=head;
        Node*prev=NULL;
        int count=0;
        
        
          while(temp1->next!=NULL)
        {   
            
            temp1=temp1->next;
              count++;
            
        }
        
        // cout<<count<<endl;
        if(count+1==k)
        {
            return head;
        }
        
        
        
        
          temp1=head;
        
        while(k--)
        {   
            prev=temp1;
            temp1=temp1->next;
          
            
        }
        
        
         while(temp1->next!=NULL)
         {
             temp1=temp1->next;
         }
          
          temp1->next=head;
          head=prev->next;
          prev->next=NULL;
        
        return head;
        
    }    
        
};

void printList(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }

    cout<<endl;

}

int main()
{
    int n,val,k;
    cin>>n;

    cin>>val;

    Node* head=new Node(val);
    Node* tail=head;

    //taking input in a linked list
    for(int i=0;i<n-1;i++)
    {
        cin>>val;
        tail->next=new Node(val);
        tail=tail->next;
    }

    // how much

    cin>>k;

    //make a class 
    Solution ob;
    head=ob.rotate(head,k);
    printList(head);

}