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

void file_input(){
    if(freopen("input.txt", "r", stdin) and
    freopen("output.txt", "w", stdout))
return ;
}

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode * slow = head;
        ListNode * fast = head;

        while(fast and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();

    return 0;
}