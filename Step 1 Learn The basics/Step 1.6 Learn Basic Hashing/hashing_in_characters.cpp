#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Solution{
public:
    void hashingInLimitedAsciiCharacters(){
        string s; cin >> s;

        int hash[26] = {0};

        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']++;
        }

        int q; cin >> q;
        while(q--){
            char ch;
            cin >> ch;

            cout << hash[ch - 'a'] << endl;
        }
    }

    void hashingAllTheCharacter(){
        string s;
        getline(cin, s);
        
        int hash[256] = {0};

        for(int i = 0; i < s.size(); i++){
            hash[s[i]]++;
        }

        int q; cin >> q;
        while(q--){
            char ch;
            cin >> ch;

            cout << hash[ch] << endl;
        }
    }
};

int main(){
    Solution s;
    s.hashingAllTheCharacter();

    return 0;
}