#include<bits/stdc++.h>

using namespace std;

    //lists
    void lists() {
        list<int> ls;
        ls.push_back(2);  //pushes 2 {2}
        ls.emplace_back(4); //pushes 4 at last {2,4}

        ls.push_front(5); //pushes 5 at front{5,2,4}
        ls.emplace_front(); //{2,4}

        //rest functions are same as of the vector
        //begin, end, rbegin, rend, clear, insert, size, swap
    }

int main() {
    lists();
    return 0;
}