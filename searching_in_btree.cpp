#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Node{
    public:
       int val;
       Node* left;
       Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int val;
    cin >> val;
    Node *root;
    if(val == -1)root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root != NULL)q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1)myLeft->left = NULL;
        else myLeft = new Node(l);
        if(r == -1)myRight->right = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

bool search(Node* root,int val){
    if(root == NULL){
        return false;
    }
    if(root->val == val){
        return true;
    }
    if(root->val > val){
        return search(root->left,val);
    }
    else{
        return search(root->right,val);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    Node* root = input_tree();
    int val;
    cin >> val;
    if(search(root,val))cout << "Found" << endl;
    else cout << "Not Found" << endl;
      
    return 0;
}
