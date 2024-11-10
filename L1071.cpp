#include <iostream>
using namespace std;

int gcd(int a, int b);

string gcdOfStrings(string str1, string str2)
{
    if (str1 + str2 != str2 + str1)
    {
        return "";
    }

    return str1.substr(0, gcd(str1.size(), str2.size()));
}

// Euclidian Algorithm for calculating the GCD
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    string str1 = "LEET", str2 = "CODE";
    cout << gcdOfStrings(str1, str2) << "\n";
    return 0;
}

// ! Time Complexity = O(m+n) -> m is the length of string 1 and n is the length of string2

//! Space Complexity = O(1)