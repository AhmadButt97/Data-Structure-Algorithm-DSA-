#include <iostream>
#include<queue>
using namespace std;
class Node
{
public:
int value;
Node * left;
Node * right;
Node (int x)
{
    value=x;
    right=left=NULL;
}
};
class BT_LinkList
{
private:
Node * root;
public:
void insertelement(int e)
{
    if(root==nullptr)
    {
    Node *root=new Node(e);
    return ;
    }
     // Use a queue to perform level-order traversal to find the first empty spot
        queue<Node*> q;
        Node *temp=new Node(e);
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            // Check if the left child is empty
            if (!current->left) {
                current->left = temp;
                return;
            } else {
                q.push(current->left);
            }

            // Check if the right child is empty
            if (!current->right) {
                current->right = temp;
                return;
            } else {
                q.push(current->right);
            }
        }
    }
    void insertleftchild (int p,int c)
    {
        
    }

    // Function to display the tree in level-order for verification
    void displayLevelOrder() {
        if (!root) {
            cout << "Tree is empty" << endl;
            return;
        }

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            cout << current->value << " ";

            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }

        cout << endl;
    }
};