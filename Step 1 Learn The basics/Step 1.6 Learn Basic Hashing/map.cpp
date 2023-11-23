#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    // pre compute
    // map <key, value> name_of_variable
    // key is the input value and value is refer to frequency of arrays.
    // map always comes with sorted order.
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }

    // iterate over the map
    for(auto itr: mp){
        cout << itr.first << "-> " << itr.second << endl;
    }

    int q; cin >> q;
    while(q--){
        int num;
        cin >> num;
        // fetch
        cout << mp[num] << endl;
    }
    return 0;
}
