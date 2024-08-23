#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int data){
        this->val=data;
        this->left=NULL;
        this->right=NULL;
    }
    
};
Node *buildtree(Node *root){
    cout<<"enter data: "<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the value to the left of "<<data<<" :";
    root->left=buildtree(root->left);
    cout<<"enter the value to the right of "<<data<<" :";
    root->right=buildtree(root->right);
    return root;
    }
void inorderT(Node *root){
    if(root){
        inorderT(root->left);
        cout<<root->val<<" ";
        inorderT(root->right);
    }
}
void sumBT(int &count, Node *root){
    if(root){
        sumBT(count,root->left);
        count+=root->val;
        sumBT(count,root->right);
    }
}
int main()
{   
    Node *root=NULL;
    root=buildtree(root);
    inorderT(root);
    int count=0;
    sumBT(count,root);
    cout<<"sum of Btree:"<<count;
return 0;
}