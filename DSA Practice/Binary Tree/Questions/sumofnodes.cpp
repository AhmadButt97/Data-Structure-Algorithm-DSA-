//     long int sumBT(Node* root) {
//         if (root == nullptr) {
//             return 0;
//         }
//         long int value = 0;
//         sum(root, value);
//         return value;
//     }

// private:
//     void sum(Node* node, long int &Summ) {
//         if (node == nullptr) {
//             return;
//         }
//         Summ += node->data; // Use shorthand for addition
//         sum(node->left, Summ);
//         sum(node->right, Summ);
//     }

//other method

//int sum(Node* node) {
//         if (node == nullptr) {
//             return 0;
//         }
//         return (node->data + sum(node->left) + sum(node->right));
//     }