#include<bits/stdc++.h>

using namespace std;

    //Maps - <key, value> and has unique keys and are arranged in sorted orders
    void explainMaps() {
        
        map<int, int> mpp; //<integer key, integer value>
 
        map<int, pair<int, int>> mpp; //<integer key, 2 integer value>

        map<pair<int, int>, int> mpp; //<2 integer key, integer value>
    
        mpp[1] = 2; // stores {1,2}
        mpp.insert({3,1}); // stores {3,1}
        mpp.insert({2,4}); // stores {2,4}
        
        for(auto it:mpp){
            cout<<it.first<<" "<<it.second<<endl;
        }

        //{{1,2}, {2,4},{3,1}}

        cout<<mpp[1]; // 2 at 1 we are storing 2
        cout<<mpp[5]; // 0 becuase 5 never exist

        auto it = mpp.find(3);
        cout<<*(it).second; //it will access the {3,1} and gives value 1


    }

int main() {
    explainMaps();
    return 0;
}