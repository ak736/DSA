//Hashing- Prestore and fetching 
#include<bits/stdc++.h>
using namespace std;
// wait a min da
//arrays takes more space

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[13] = {0};
//     for(int i=0;i<n;i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin>>q;
//     while(q--) {
//         int number;
//         cin>>number;
//         //fetching
//         cout<<hash[number] << endl;
//     }
// }

//map takes less space
//map takes log(n)
//unordered_map takes O(1) * O(N) --> priority
//Hashing:  Divison method - take % 10 and store it, if same value it will arrange in sorted manner and that is linear chaining
// Folding Method, Mid Square Method (not used that much )
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    //precompute

    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }

    //iterate in the map
    for(auto it:mpp){
            cout<<it.first<<" "<<it.second<<endl;
        }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<< mpp[number] <<endl;
    }

    return 0;
}