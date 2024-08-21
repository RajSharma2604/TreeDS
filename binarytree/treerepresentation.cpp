//
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
class BinaryTree{
    public:
    Node *root;
    BinaryTree(){
        root=NULL;
    }
    Node *insertNode(Node *root,int data){
        if(!root){
            root=new Node(data);
        }
        else if(root->val<=data){
            root->right=insertNode(root->right,data);
        }
        else{
            root->left=insertNode(root->left,data);
        }
        return root;
    }
    void insert(int data){
        root=insertNode(root,data);
    }
    void inorderTraversal(Node *root){
        if(root){
        inorderTraversal(root->left);
        cout<<root->val<<" ";
        inorderTraversal(root->right);
    }
    }
    void traversal(){
        inorderTraversal(root);
    }
};
int main()
{   
    BinaryTree tree;
    cout<<"hi.."<<endl;
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(2);
    tree.insert(11);
    cout<<"inordertraversal:"<<endl;
    tree.traversal();
return 0;
}