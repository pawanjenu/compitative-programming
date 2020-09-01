#include <bits/stdc++.h>

using namespace std;

#define lli long long int
#define ll long long
#define li long int
#define ld long double
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define vl vector<long>
#define vlli vector<long long int>
#define pii pair<int, int>
#define plli pair<lli, lli>
#define endl "\n"
#define mod 1000000000+7

void file_input() {
    if (freopen("input.txt", "r", stdin) and
        freopen("output.txt", "w", stdout))
        return;
}
class Solution {
public:

struct TreeNode {
     int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL)
            return result;
        queue<TreeNode*> nodes;
        nodes.push(root);
        bool from_left = true;
        while (!nodes.empty()){
            int len = nodes.size();
            vector<int> current_level;
            while (len--){

                TreeNode * node = nodes.front();
                nodes.pop();
                if(node != NULL){
                    current_level.push_back(node->val);
                    if( node->left!= NULL)
                        nodes.push(node->left);
                    if( node->right!= NULL)
                    nodes.push(node->right);
                }
            }
            if(!from_left)
                reverse(current_level.begin(),current_level.end());
            from_left = !from_left;
            result.push_back(current_level);
        }
        return result;
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();

    return 0;
}