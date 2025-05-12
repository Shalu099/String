#include<iostream>
using namespace std;
void RemoveSpace(char *str){
    int count=0;
    for(int i=0;str[i];i++)
        if(str[i]!=' ')
        str[count++]=str[i];
        str[count]='\0';
    
}
int main(){
    char str[]="hello coder !";
    RemoveSpace(str);
    cout<<"After removing space:"<<endl;
    cout<<str<<endl;
    return 0;

}
