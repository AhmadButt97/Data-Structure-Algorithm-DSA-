#include<iostream>
#include<vector>
#include<queue>
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

class Solution {
  public:
    int getSize(Node* node) {
        int count=0;
        size(node,count);
        return count;
    }
    void size(Node *root,int &count)
    {
        if(root==nullptr)
        {
            return ;
        }
        count++;
        size(root->left,count);
        size(root->right,count);
    }  
    //other method
    int sizeofbinary(Node *root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        return (1 + sizeofbinary(root->left) + sizeofbinary(root->right));
    }
};
