#include <iostream>
using namespace std;
int countwords(string s)
{
   
    int count = 1;

    for (char character : s)
    {
        if (character == ' ')
            count++;
    }
    return count;
}
int main()
{
    string str = "hello coder army";
    cout << countwords(str);

    return 0;
}