#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string input="";
    cin>>input;
    int end=input.length();
    char in[100000]="";
    strcpy(in,input.c_str());
    string out="";
    for(int i=0;i<end;i++){
        cout<<(char)((int)in[i]-7);
    }
    return 0;
}
