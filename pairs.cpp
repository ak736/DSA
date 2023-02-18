#include<bits/stdc++.h>

using namespace std;

    //pairs
    void pairs() {
        pair<int, int> p ={1,2};
        
        cout<<p.first<<" "<<p.second;

        cout<<endl;

        pair<int, pair<int, int>> q ={3,{5,8}};

        cout<<q.first<<" "<<q.second.second<<" "<<q.second.first;

        cout<<endl;

        pair<int, int> arr[]={{1,3},{6,7},{9,5}};

        cout<<arr[1].first;
    }

int main() {
    pairs();
    return 0;
}