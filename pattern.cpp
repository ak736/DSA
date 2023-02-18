#include <bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    // code here
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int start = 1;
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int space = 4 * (n - i);

        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << endl;
        space = space - 2;
    }
}
void pattern5(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    char a = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    int inis = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }
    inis = 8;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
}
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int space = 2 * (n - i);
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }

    for (int i = 1; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < (2 * i); j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
    }
}
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
    pattern13(5);
    return 0;
}