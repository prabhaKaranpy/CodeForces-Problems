#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
    TreeNode(int val, TreeNode* left, TreeNode* right){
        this->val = val;
        this->left = left;
        this->right = right;
    }
};
int main(void){
    cout<<"Hello, World!"<<endl;
    int a = 5;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    TreeNode* node1 = new TreeNode(5);
    TreeNode* node2 = new TreeNode(10);
    TreeNode* root = new TreeNode(100, node1, node2);
    cout<<root->val<<endl;
    cout<<root->left->val<<endl;
    cout<<root->right->val<<endl;
    cout<<"---"<<endl;
    cout<<endl;
    vector<int> arr(3, 6);
    for(int &it : arr) cout<<it<<"  ";
    cout<<endl;
}
