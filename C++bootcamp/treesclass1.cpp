#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
    
    
   
};


 Node* buildTree(Node* root){
     cout<<"enter the data:"<<endl;
     int data;
     cin>>data;

     root = new Node(data); 

     if(data==-1){
        return NULL;
     }  

     cout<<"enter the data to enter the data in left node"<<data<<endl;
     root->left = buildTree(root->left);

    cout<<"enter the dats to enter the data in right"<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}


void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        // cout<<temp->data<<endl;
        q.pop();

         if(temp== NULL){
         cout<<endl;

          if(!q.empty()){
            q.push(NULL);
          }  
// purana level completey traverse ho chuka hain
         } 

         else{
             cout<<temp->data<<" ";
             if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
         }
       
    }

}

void inorderTraversal(Node* root){
    // base case
    if(root== NULL){
        return ;
    }

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}







int main()
{
    Node* root = NULL;
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //level order traversal
    levelOrderTraversal(root);
}