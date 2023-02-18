#include<bits/stdc++.h>

using namespace std;

    void explainExtra() {
        
        sort(a, a+n); //sorts the numbers
        sort(v.begin(), v.end()); 

        sort(a+2, a+4); //sorts numbers b/w them

        sort(a, a+n, greater<int>); //sorts in descending order

        pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};

        //sort it according to second element
        //if second element is same, then sort it acc to first element but in descending order

        sort(a, a+n, comp); //{{4,1},{2,1},{1,2}}

        //comp function will sort acc to given condition

        //how comp works
        bool comp(pair<int,int>p1, pair<int,int>p2){
            //sort it in ascending order
            if(p1.second<p2.second) return true;
            if(p1.second>p2.second) return false;

            //if elements are same
            if(p1.first>p2.first) return true;
            return false; //remaining  cases

        // get binary digits

            int num = 7;
            int cnt = __builtin_popcount(); //returns number of 1 in then binary of 7

            long long num = 3843924737249838744;
            int cnt = __builtin_popcountll(); //used for long numbers

            string s = "123";
            //sort the string to get all permutation

            do {
                cout << s << endl;
            }   while(next_permutation(s.begin(), s.end())); //permutation of the given string


            int maxi = *max_element(a, a+n); //gives you the max element

        } 
        
    }

int main() {
    explainExtra();
    return 0;
}