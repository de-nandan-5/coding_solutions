/*
D  E   A   D     C  A  L  M
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en                "\n"
#define pb                push_back
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define sz(x)             (int)((x).size())
#define all(x)            (x).begin(),(x).end()
#define ff first
#define ss second
/*
Editing
*/
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;
}

int tree_balanced(Node *root)
{
    int lh; /* for height of left subtree */
    int rh; /* for height of right subtree */

   
    if (root == NULL)
        return 1;

   
    lh = height(root->left);
    rh = height(root->right);

    if (abs(lh - rh) <= 1 && tree_balanced(root->left) && tree_balanced(root->right))
        return 1;

 
    return 0;
}
int main()
{
      Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->left = new Node(30);
    root->left->right = new Node(40);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    cout<<tree_balanced(root);
    return 0;
}
