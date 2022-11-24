#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left=nullptr;
    Node *right=nullptr;
    Node(int data){
        this->data = data;
    }
};

bool Levelorder(Node *root, int level){

    if(root == NULL) return false;
    if(level ==1){
        cout<<root->data<<"\t";
        return true;
    }

    bool left = Levelorder(root->left, level-1);
    bool right = Levelorder(root->right, level-1);
    return left || right;
}
void printlevelorder(Node *root){
    int level =1;
    while(Levelorder(root, level)){
        level++;
    }

}


//GFG SOLUTION 

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    vector<int> v;


    bool traverse(Node *node, int level){
        if(node==NULL) return false;
        if (level == 1)
        {
            v.push_back(node->data);
            return true;
        }

        bool left = traverse(node->left, --level);
        bool right = traverse(node->right, --level);
        return left || right;
    }

    vector<int> levelOrder(Node *node)
    {
        int level = 1;
        while(traverse(node, level)){
            level++;
        }
        return v;
    }
};

