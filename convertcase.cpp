#include<iostream>
using namespace std;

void convert(string s){
    int l=s.length(); 
    for(int i=0;i<l;i++){
        if(s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
        else if(s[i]>='A' && s[i]<='Z')
          s[i]=s[i]+32;
    }
}
int main(){
    string str="a";
    convert(str);
    cout<<str;
    return 0;
}