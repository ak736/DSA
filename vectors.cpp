#include<bits/stdc++.h>

using namespace std;

    void vectors() {

    // //vectors - type of can be used when you dk about the size of the required data structure.

    //     vector<int> vector1 = {10, 20, 30, 40, 50};
        
    //     vector1.push_back(1);  // will push 1 to empty vector
    //     vector1.emplace_back(2); // will push 2 after the given vector

    //     vector<pair<int, int>> vector2 = {{10, 20}, {30, 40}}; //pairs as vectors
        
    //     vector2.push_back({1,2}); //will push pair {1,2} to the vector
    //     vector2.emplace_back(1,2); // assumes that given set is already a pair and it will replace it.

    //     vector<int> vector3(5, 100); // will make a vector with 5 100s {100, 100, 100, 100, 100}

    //     vector<int> vector4(5); // will make 5 empty space vector

    //     vector<int> vector5(vector3); // vector3 will be copied to vector5


    // //iterators - points to the memory address of the given vector

    //     vector<int> vector6 = {10, 20, 30, 40, 50};

    //     vector<int>::iterator it = vector6.begin(); //syntax of iterator "it" is variable
    //     //.begin will point to the memory addreess of the first vector
    //     //.end will point the element right after the last element(use -- operator to get the last element)
    //     //.rend is reverse end.
    //     //.rbegin is reverse begin. 

    //     it++;

    //     cout<<*(it)<<" "; 

    //     // This will give the memory address, but * will give the element of the memory address which belongs to it.

    //     cout<<endl; 

    //     cout<<vector6[1]; //print the 1st element(0 based indexing) of vector6

    //     cout<<endl;

    //     cout<<vector6.back()<<" "; // prints the last element of vector6

    //     //print vector using for loops
    //     vector<int> vector7 = {10, 20, 30, 40, 50};

    //     //this will loop from .begin to the .end(excluding)
    //     for(vector<int>::iterator it = vector7.begin(); it!=vector7.end(); it++){
    //         cout<<*(it)<<" ";
    //     }

    //     //vector<int>::iterator = auto
    //     for(auto it = vector7.begin(); it!=vector7.end(); it++){
    //         cout<<*(it)<<" ";
    //     }

    //     // it is looping throught the vector
    //     for(auto it:vector7) {
    //         cout<<it<<" ";
    //     }

    //     //deletion of vector
    //     vector<int> vector8 = {10, 20, 30, 40, 50};

    //     //deletes single element
    //     vector8.erase(vector8.begin()+1); //{10, 30, 40, 50}

    //     //delete multiple elements
    //     vector8.erase(vector8.begin()+2, vector8.begin()+4); //{10, 20, 50} [start, end)

    //     //insertion of vector
    //     vector<int>vector9(2,100); // {100, 100}

    //     //inserting single element
    //     vector9.insert(vector9.begin(), 300); // inserts 300 at beginning {300, 100, 100}

    //     //inserting multiple element
    //     vector9.insert(vector9.begin()+1, 2,10); // inserts {10,10} at pos .begin()+1 {100, 10, 10, 100}

    //     cout<<vector9.size(); // gives the size of vector9 i.e 2

    //     vector9.pop_back(); //pop out the last element and return you the vector

    //     //swap
    //     //v1 = {10, 20}, v2 = {60,70}

    //     v1.swap(v2); // v1 ={60,70} , v2 = {10,20}

    //     vector9.clear(); //erases the entire vector


    }

int main() {
    vectors();
    return 0;
}