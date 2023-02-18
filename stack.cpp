#include<bits/stdc++.h>

using namespace std;

    //stacks - LIFI(Last IN First OUT)
    void explainStack() {
        
       stack<int> st; // syntaxof stacks
       st.push(1); // {1}
       st.push(2); // {2,1}
       st.push(3); // {3,2,1}
       st.push(4); // {4,3,2,1}
       st.emplace(5); // {5,4,3,2,1}

       cout<<st.top(); //prints 5 cuz 5 is present at the top of stack

       st.pop(); //deletes the top element in stack

       st.size(); //gives you the size of the stack

       st.empty(); //clear the stack

       stack<int> st1,st2;
       st1.swap(st2);
        
    }

int main() {
    explainStack();
    return 0;
}