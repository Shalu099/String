#include <iostream>
using namespace std;

void togglechar(char str[])
{
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 'a' - 'A';
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] + 'A' - 'a';
    }
}

int main()
{
    char str[] = "sdgrk@jd";
    togglechar(str);
    cout << "string after toggle:" << endl;
    cout << str << endl;
    return 0;
}