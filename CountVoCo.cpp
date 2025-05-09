#include <bits/stdc++.h>
using namespace std;

void countVoCo(string s)
{
    int vowel = 0;
    int consonant = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = tolower(s[i]);

        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    cout << "vowel:" << vowel << endl;
    cout << "consonant:" << consonant << endl;
}
int main()
{
    string s = "Hello World";
    countVoCo(s);
    return 0;
}