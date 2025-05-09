#include <iostream>
using namespace std;
int main()
{
    string s = "Hello";
    int left = 0;
    int right = s.size() - 1;
    while (left < right)
    {
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }

    cout << "Reversed string: " << s << endl;
    return 0;
}