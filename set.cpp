#include<bits/stdc++.h>

using namespace std;

    //sets - everthing wil bee sorted and each element will be unique
    void explainSet() {
        
        set<int> st;
        st.insert(1); //{1}
        st.insert(2); //{1,2}
        st.emplace(2); //{1,2}
        st.insert(4); //{1,2,4}
        st.insert(3); //{1,2,3,4}

        //begin(), end(), rbegin(), rend(), swap(), size(), empty() are same for above

        auto it = st.find(3); //gives the iterator which points 3

        auto it = st.find(6); //if element is not present, it will return the element right next to the last element

        st.erase(4); //deletes 4
        st.erase(it); //erases the iterator

        int cnt = st.count(1); //stores unique element so value will always be 1 or 0

        //{1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1,it2); //{1,4,5} [start(includes), end(excludes))

        //timecomplexity is logn
        
    }

int main() {
    explainSet();
    return 0;
}