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
struct compare {
    bool operator()(pair<string, int> &a, pair<string, int> &b){
        if(a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    }
};

vector<string> get_max_k_elemets(vector<string> reviews, vector<string>keywords, int k){
    unordered_map<string, int> word_count;
    unordered_set<string> keyword_set(keywords.begin(), keywords.end());
    for(auto &each_line: reviews){
        unordered_set<string> para_words;
        istringstream line(each_line);
        string word;
        while (line >> word){
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            para_words.insert(word);
        }
        for(auto &word: para_words){
            word_count[word]++;
        }
    }
    priority_queue<pair<string, int>, vector<pair<string, int>>, compare> freq(word_count.begin(), word_count.end());
    vector<string> result;
    while (k--){
        result.push_back(freq.top().first);
        freq.pop();
    }
    return result;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    file_input();
    vector<string> keywords = {"anacell", "cetracular", "betacellular"};
    vector<string> reviews = {  "Anacell provides the best services in the city",
                                "betacellular has awesome services",
                                "Best services provided by anacell, everyone should use anacell"};

    vector<string> res = get_max_k_elemets(reviews,keywords,2);
    for(auto &it: res)
        cout << it <<" ";
    return 0;
}