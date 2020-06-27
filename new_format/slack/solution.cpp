#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int>&b){
        if(a.second != b.second)
            return a.second > b.second;
        else
            return a.first < b.first;
}

void count_toys(int numtoys, int toptoys, vector<string> &toys_names, int numquates, vector<string> &quotes){

    unordered_map<string, int> final_count;

    for(const auto & s: toys_names){
        final_count[s] = 0;
        // cout << s<<endl;

    }
     

    for(auto each_string: quotes){
        unordered_map<string, int> temp_count;
        transform(each_string.begin(), each_string.end(), each_string.begin(), ::tolower); 
        stringstream each_word(each_string);
        string word;
        while(each_word >> word){
            if(final_count.find(word) != final_count.end()){
                temp_count[word]++;
            }
        }

        for(auto it: temp_count){
  
           final_count[it.first]++;
        }
        // cout << endl;
 
    }
    vector<pair<string, int>> for_now;

      for(auto it: final_count)
        for_now.push_back(it);

    sort(for_now.begin(), for_now.end(),cmp);

    for(int i = 0; i < toptoys ; i++)
        cout << for_now[i].first<<endl;

   
    
    
}
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
//  vector<string> toys_names = {"elmo", "elsa", "legos", "drone", "tablet", "warcraft"};
//  vector<string > quotes = {"Elmo is the hottest toy of the season Elmo will be on every quality", "Expect the Elsa dolls to be very popular this year", "Elsa and Elmo are the toys parents of older kids", "look into buying them a drone kid's wishlists"," The new Elmo dolls are super high be buying for my kids", "Warcraft is slowly rising in popularity ahead of the holiday season"};


 count_toys(6,2, toys_names,6,quotes);


 return 0;
}