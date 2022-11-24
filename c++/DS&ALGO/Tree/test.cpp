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