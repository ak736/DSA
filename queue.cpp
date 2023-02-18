#include<bits/stdc++.h>

using namespace std;

    //queue - FIFO(First IN First OUT)
    void explainQueue() {
        
        queue<int> q;
        q.push(1); //{1}
        q.push(2); //{1,2}
        q.push(3); //{1,2,3}

        q.back() +=5; 
        cout<<q.back(); // prints 8 

        cout<<q.front(); // prints 1 cuz it's the first element

        q.pop(); // {2,3}, deletes the elemet at 1st place

        //size swap empty same as stack
    }

int main() {
    explainQueue();
    return 0;
}