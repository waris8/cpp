#include<iostream>
#include<vector>

using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class SolutionTree {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==nullptr){
            return result;
        }
        inorderRecur(root, &result);
        return result;
    }

    bool isValidBST(TreeNode* root) {
        return validrecur(root, root->val);
    }

    void flatten(TreeNode* root) {
        TreeNode* end = root;
        flattenRecur(root, end);
    }

private:

    TreeNode* flattenRecur(TreeNode* node, TreeNode* end){
        if(node==nullptr){
            return nullptr;
        }
        TreeNode* right = node->right;
        if(node->left!=nullptr){
            flattenRecur(node->left, node->left);
            end = endOf(node->left);
            node->right = node->left;
            node->left=nullptr;
        }
        if(right!=nullptr){
            flattenRecur(right, right);
            end->right = right;
        }
        return node;
        
    }

    TreeNode* endOf(TreeNode* node){
        while(node->right!=nullptr){
            node = node->right;
        }
        return node;
    }
    void inorderRecur(TreeNode* node, vector<int>* result){
        if(node==nullptr){return;}
        inorderRecur(node->left, result);
        result->push_back(node->val);
        inorderRecur(node->right, result);

    }

    bool validrecur(TreeNode* node, int parent){
        if(node==nullptr){
            return true;
        }
        if((node->left!=nullptr && (node->left->val>=node->val || node->left->val)) 
                || (node->right!=nullptr && node->right->val<=node->val)){
            return false;
        }
        return validrecur(node->left, parent) && validrecur(node->right,parent);
    }
};

int main(){
    SolutionTree solution;
    // cout << solution.inorderTraversal() << endl;
    TreeNode a(1);
    TreeNode b(2);
    TreeNode c(3);
    TreeNode d(4);
    TreeNode e(5);
    TreeNode f(6);
    // TreeNode g(7);
    // TreeNode h(8);
    // TreeNode i(9);
    // f.left = &e;
    // f.right = &h;
    // e.left = &c;
    // h.left = &g;
    // h.right = &i;
    // c.left = &b;
    // c.right = &d;
    a.left = &b;
    b.left = &c;
    b.right = &d;
    a.right = &e;
    e.right = &f;
    // vector<int> r = solution.inorderTraversal(nullptr);
    // bool r = solution.isValidBST(&f);
    solution.flatten(&a);
    cout << "hello world" << endl;
    return 0;
}