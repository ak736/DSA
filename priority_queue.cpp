#include<bits/stdc++.h>

using namespace std;

    //priorityQueue
    void explainPQ() {
        
        //Maximum Heap - to keep the largest element at the top
        priority_queue<int> pq;
        pq.push(5); //{5}
        pq.push(2); //{5,2}
        pq.push(8); //{8,5,2}
        pq.emplace(10); //{10,8,5,2}
        
        cout<<pq.top(); //prints 10
        pq.pop(); //deletes the first element {8,5,2{}

        //size swap empty same as stack

        //Minimum Heap - to keep the lowest element at the top

        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(5); //{5}
        pq.push(2); //{2,5}
        pq.push(8); //{2,5,8}
        pq.emplace(10); //{2,5,8,10}

        cout<<pq.top(); //prints 2        
        //size swap empty same as stack

    //time complexity
    //push and pop = log(n), top = O(n) 

    }

int main() {
    explainPQ();
    return 0;
}