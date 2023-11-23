#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    unordered_map <char, int> mp;

    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    // unorderd map gives output in random order.
    for(auto itr : mp){
        cout << itr.first << " " << itr.second << endl;
    }

    int q; cin >> q;
    while(q--){
        char ch;
        cin >> ch;

        cout << mp[ch] << endl;
    }

    return 0;
}
