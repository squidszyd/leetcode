// Tags:    [binary tree]
class Solution {
public:
    string helper(unordered_map<string, int>& mp, TreeNode* root, vector<TreeNode*>& res){
        if(root==nullptr)   return "#,";
        string left = helper(mp, root->left, res);
        string right = helper(mp, root->right, res);
        string str = to_string(root->val) + "," + left + right;
        if(mp[str] == 1)    res.push_back(root);
        ++mp[str];
        return str;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> res;
        unordered_map<string, int> mp;
        helper(mp, root, res);
        return res;
    }
};
