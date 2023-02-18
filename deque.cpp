#include<bits/stdc++.h>

using namespace std;

    //deque
    void explainDeque() {
        
        deque<int>dq;
        dq.push_back(1);// {1}
        dq.emplace_back(2); // {1,2}
        dq.push_front(3); // {3,1,2}
        dq.emplace_front(5); // {5,3,1,2}

        dq.pop_back(); //{5,3,1} pops the last element
        dq.pop_front(); // {3,1} pops the first element

        dq.back(); //prints the last element
        dq.front(); //prints the first element

        //rest functions are same as of the vector
        //begin, end, rbegin, rend, clear, insert, size, swap
        
    }

int main() {
    explainDeque();
    return 0;
}