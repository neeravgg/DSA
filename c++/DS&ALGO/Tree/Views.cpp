#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(int data)
    {
        this->data = data;
    }
};

Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}
void topview(Node *root, map<int, int> &m, int hd)
{

    if (root == NULL)
        return;

    if (!m.count(hd))
        m.insert(pair<int, int>(hd, root->data));

    topview(root->left, m, hd - 1);
    topview(root->right, m, hd + 1);
}
void bottomview(Node *root, map<int, int> &m, int hd)
{

    if (root == NULL)
        return;

    if (m.count(hd))
    {
        m.insert(pair<int, int>(hd, root->data));
        // m[hd] = root->data;
    }

    topview(root->left, m, hd - 1);
    topview(root->right, m, hd + 1);
}
void print(Node *root)
{
    if (root != NULL)
    {
        print(root->left);
        cout << root->data << "  ";
        print(root->right);
    }
}
int main()
{
    Node *root = nullptr;
    map<int, int> m;
    int hd = 0;
    int arr[] = {10, 7, 4, 3, 11, 14, 6};
    for (int n : arr)
        root = insert(root, n);
    print(root);
    // topview(root, m, hd);
    bottomview(root, m, hd);
    map<int, int>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {

        cout << it->second << " ";
    }

    return 0;
}