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
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> all_words(wordList.begin(), wordList.end());
        queue<string> words;
        int count  = 1;
        words.push(beginWord);
        while (!words.empty()){
            int len = words.size();
            int i = 0;
            while (i < len){
                string current_word = words.front();
                words.pop();
                for (int i = 0; i < current_word.length(); ++i) {
                    char temp = current_word[i];
                    for (char j = 'a'; j <= 'z'; ++j) {
                        current_word[i] = j;
                        if (all_words.contains(current_word)) {
                            if (current_word == endWord)
                                return count + 1;
                            words.push(current_word);
                            all_words.erase(current_word);
                        }
                    }
                    current_word[i] = temp;
                }
                i++;
            }
            count++;
        }
        return 0;
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vector<string > allwords = {"hot","dot","dog","lot","log","cog"};
    Solution obj;
    cout << obj.ladderLength("hit", "cog", allwords);
    return 0;
}