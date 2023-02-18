#include<bits/stdc++.h>

using namespace std;

    //multisets - only sorted but not unique
    void explainMultiSets() {
        
        multiset<int> ms;
        ms.insert(1); //{1}
        ms.insert(1); //{1,1}
        ms.insert(1); //{1,1,1}

        ms.erase(1); //all 1's erased

        int cnt = ms.count(1); //3

        //deleting a single element
        ms.erase(ms.find(1)); //finds the occurence of 1 and deletes it
        
        ms.erase(ms.find(1), ms.find(1)+2); //finds the occurence of 1 and deletes it
    
    }

int main() {
    explainMultiSets();
    return 0;
}