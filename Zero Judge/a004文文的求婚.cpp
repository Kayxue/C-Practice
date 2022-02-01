#include<iostream>
using namespace std;

int main(){
    int input;
    while (cin >> input)
    {
        if(input%400==0 || (input%100!= 0 && input%4==0)){
            cout<<"閏年"<<endl;
        }else{
            cout<<"平年"<<endl;
        }
    }
}