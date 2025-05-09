#include <iostream>
using namespace std;

bool ispalindrome(string s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (s[left++] != s[right--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    ispalindrome(s);
   
    // if (ispalindrome(s))
    // {
    //     cout << s << " is a palindrome." << endl;
    // }
    // else
    // {
    //     cout << s << " is not a palindrome." << endl;
    // }
    return 0;
}