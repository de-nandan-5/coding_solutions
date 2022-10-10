// DEAD CALM
// de_
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"
#define pb push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
#define sz(x) (int)((x).size())
#define all(x) (x).begin(), (x).end()
// map , set , multimap and multiset implement self balancing bst*****************in java treeSet ande TreeMap
struct Node
{
    int key, lCount;
    Node *left, *right;

    Node(int x)
    {
        key = x;
        left = right = NULL;
        lCount = 0;
    }
};

bool isPairSum(Node *root, int sum, unordered_set<int> &s)
{
    if (root == NULL)
    {
        return false;
    }

    if (isPairSum(root->left, sum, s) == true)
        return true;

    if (s.find(sum - root->key) != s.end())
        return true;
    else
        s.insert(root->key);

    return isPairSum(root->right, sum, s);
}

int main()
{
    // ll n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n;i++)
    // {
    //     cin>>arr[i];
    // }
    // printCeiling(arr,n);
    // Node *root = new Node(20);
    // root->left = new Node(60);
    // root->left->left = new Node(4);
    // root->left->right = new Node(10);
    // root->right = new Node(80);
    // root->right->left = new Node(8);
    // root->right->right = new Node(100);

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    

    unordered_set <int> S;
    cout<<isPairSum(root,50,S);
  

    return 0;
}
