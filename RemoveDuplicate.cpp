#include <iostream>
using namespace std;

string removeduplicates(string s)
{
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                break;
            }
        }
        if (i == j)
        {
            ans += s[i];
        }
    }
    return ans;
}
int main()
{
    string str = "helllllo";
    cout << "Original string:" << str << endl;
    cout << "After removing duplicates:" << removeduplicates(str) << endl;
    return 0;
}