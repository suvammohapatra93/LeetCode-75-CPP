
// LeetCode -> 1768 -> Merge Strings Alternately

#include <iostream>
using namespace std;

int main()
{
    string word1 = "abc";
    string word2 = "def";

    int i = 0, j = 0;
    string answer = "";

    while (i < word1.size() && j < word2.size())
    {
        answer + word1[i++];
        answer + word2[j++];
    }

    while (i < word1.size())
    {
        answer += word1[i++];
    }

    while (j < word2.size())
    {
        answer += word2[j++];
    }

    cout << "Answer will be -> " << answer << "\n";

    return 0;
}

//! Time Complexity = O(max(m,n)) -> m is the length of word1 and n is the length of the word2.

//! Spac Complexity = O(m+n)
