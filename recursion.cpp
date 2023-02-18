// recursion  - when a function  calls itself until a specified cond. is made
// stack overflow - waiting cuz of recursion
// base cond. - a cond. used to stop recursion
#include <bits/stdc++.h>

using namespace std;

void printName(int i, int n)
{
    // if(n==0) return;
    // else{
    //     cout<<"JOY"<<" ";
    //     printName(n-1);
    // }
    if (i > n)
        return;
    else
    {
        cout << "JOY"
             << " ";
        printName(i + 1, n);
    }
}
void print1toN(int i, int n)
{
    if (i > n)
        return;
    else
    {
        cout << i << " ";
        print1toN(i + 1, n);
    }
}
void printNto1(int i, int n)
{

    // if(N==0) return;
    // cout<<N<<" ";
    // printNos(N-1);
    // }
    if (i == n)
        return;
    else
    {
        cout << n - i << " ";
        printNto1(i + 1, n);
    }
}
int sumOfNnos(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return n + sumOfNnos(n - 1);
    }
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}
void reverseArray(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}
bool palindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return palindrome(i + 1, s);
}
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);
    return last + slast;
}

int main()
{
    // int n;
    // cin >> n;
    // printName(1,n);
    // print1toN(1,n);
    // printNto1(0,n);
    // cout<<sumOfNnos(n);
    // cout<<factorial(n);
    /* Reverse an Array
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverseArray(0, arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0; */
    //Palindrome
    string s = "MADAM";
    cout<<palindrome(0,s);
    return 0; 
    //cout << fibonacci(n);
}