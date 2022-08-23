#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int height_of_tree(node *root)
{
    if(root==NULL)
    return 0;
    int left = height_of_tree(root->left);
    int right = height_of_tree(root->right);
     return max(left,right)+1;
}
bool check_balance(node *root)
{
    if(root==NULL)
    return true;
    bool l = check_balance(root->left);
    bool r = check_balance(root->right);
    int diff = abs(height_of_tree(root->left)-height_of_tree(root->right));
    if(l &&r&&diff>=1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    // node *root = new node(11);
    // node *n1 = new node(1);
    // node *n2 = new node(2);
    // node *n3 = new node(3);
    // node *n4 = new node(4);
    // node *n5 = new node(5);
    // node *n6 = new node(6);

    // root->left = n1;
    // root->right = n4;
    // n1->left = n2;
    // n1->right = n3;
    // n4->left = n5;
    // n4->right = n6;

    node *root = new node(1);
    node *n1 = new node(12);
    node *n2 = new node(13);
    node *n3 = new node(14);

    root->left = n1;
    root->right = n3;
    root->left = n2;
    cout << "\nInorder Tranversal   : ";
    inorder(root);
    if(check_balance(root))
    {
        cout<<"Tree is balance"<<endl;
    }
    else
    {
        cout<<"Tree is not balance"<<endl;
    }
    return 0;
}