#include <bits/stdc++.h>
using namespace std;

void countingDigits(int n)
{
    int temp = n, count = 0;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        temp = temp / 10;

        if (lastDigit > 0 && n % lastDigit == 0)
            count++;
    }
    cout << count;
}
void reverseDigits(int n)
{
    int revNum = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + lastDigit;
    }
    cout << revNum;
}
void checkPalindrome(int n)
{
    int temp = n, revNum = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + lastDigit;
    }
    if (temp == revNum)
        cout << "True";
    else
        cout << "False";
}
void checkArmstrong(int n)
{
    int sum = 0, temp = n;
    while (n != 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    if (sum == temp)
        cout << "True";
    else
        cout << "False";
}
void gcd(int n1, int n2)
{
    int ans;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            ans = i;
        }
    }
    cout << ans;
}
void checkDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}
void checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            cout << "It's not a Prime";
    }
    cout << "It's a Prime";
}

// Driver code
int main()
{
    checkPrime(7);
    return 0;
}