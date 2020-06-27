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

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    pair<int,TreeNode*> getNode(TreeNode* root,int x, int depth){
        if(!root) return make_pair(-1,root);

        //Found node with val=x
        if((root->left && root->left->val==x) || (root->right && root->right->val==x)) return make_pair(depth+1,root);

        //Continue search
        pair<int,TreeNode*> info_left = getNode(root->left,x,depth+1);
        pair<int,TreeNode*> info_right = getNode(root->right,x,depth+1);

        //Recursively return info of found node
        if(info_left.first==-1) return info_right;
        return info_left;
    }

    bool isCousins(TreeNode* root, int x, int y) {
        //Get depth and parent node of node with values x and y
        pair<int,TreeNode*> info_x = getNode(root,x,0);
        pair<int,TreeNode*> info_y = getNode(root,y,0);
        

        //Valid if depths are equal and parent nodes are not the same
        if(info_x.first==info_y.first && info_x.second!=info_y.second) return true;

        return false;
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vi nums = {};
    Solution obj;
    return 0;
}