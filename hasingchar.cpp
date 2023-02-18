//Hashing- Prestore and fetching 
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    //pre compute
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'A'] ++;
    }

    int q;
    cin>>q;
    while(q--) {
        char c;
        cin>>c;

        //fetch
        cout<<hash[c-'A'] << endl;
    }
}

//for small letters = c - 'a'
//for capital letters = c - 'A'
//for mixed letters = c //store [256] char