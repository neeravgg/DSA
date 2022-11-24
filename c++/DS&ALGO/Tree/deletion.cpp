#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node
{

    int data;
    Node *left, *right = nullptr;

    Node(int data)
    {
        this->data = data;
    }
};

Node *insert(Node *root, int data)
{

    if (root == nullptr)
        return new Node(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

Node* deletion(Node *root, int key)
{

    if (root->data > key)
    {
        deletion(root->left, key);
    }
    else if (root->data < key)
    {
        deletion(root->right, key);
    }

    else
    {
        if (root->right == NULL)
        {

            Node *temp = root->left;
            free(root);
            return temp;
        }
        else if (root->left == NULL)
        {

            Node *temp = root->right;
            free(root);
            return temp;
        }
    }

    Node* temp = minvalue(root->right);
    root->data = temp->data;
    root->right = deletion(root->right, temp->data);
    return root;
}

Node* minvalue(Node* temp){
    if(temp->left!= NULL ){
        minvalue(temp->left);
    }
    return temp;
}


int main()
{
    return 0;
}