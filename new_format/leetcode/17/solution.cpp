#include <bits/stdc++.h>
using namespace std;

map<int, string> mobilePad; //Mobile Pad number to string mapping.
    void Solution()
    {
        mobilePad[2] ="abc";
        mobilePad[3] ="def";
        mobilePad[4] ="ghi";
        mobilePad[5] ="jkl";
        mobilePad[6] ="mno";
        mobilePad[7] ="pqrs";
        mobilePad[8] ="tuv";
        mobilePad[9] ="wxyz";
    }

    void print_per(string &digits, vector<string> &result, int index, string &combination){
        if(index == digits.size()){
            result.push_back(combination);
            cout <<combination<<endl;
            return;
        }
        cout <<"here"<<endl;
        string word = mobilePad[digits[index]-'0'];

        for(auto letter: word){
            combination+=letter;
            print_per(digits,result,index+1,combination);
            combination.pop_back();
        }


    }
vector<string> letterCombinations(string digits) {
    vector<string> result;
    if(digits.empty()){
        return result;
    }
    
    string combination = "";
    print_per(digits, result,0,combination);
    return result;
    }
 
int main()
 {
 ios::sync_with_stdio(0);
 cin.tie(0);
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 vector<string > yo = letterCombinations("23");
 for(auto it: yo){
     cout << it<<endl;
 }

 return 0;
}