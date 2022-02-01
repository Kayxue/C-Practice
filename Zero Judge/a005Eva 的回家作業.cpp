#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> vec;
    int in;
    cin >> in;
    for (int i = 0; i < in; i++)
    {
        vector<int> toPush;
        for(int j=0;j<4;j++){
            int k;
            cin>>k;
            toPush.push_back(k);
            toPush.capacity();
        }
        vec.push_back(toPush);
        vec.capacity();
    }
    for(vector<int> Vec:vec){
        for(int a : Vec){
            cout<<a<<" ";
        }
        int d=Vec[1]-Vec[0];
        if (Vec[2]-Vec[1]==d)
        {
                cout<<Vec[3]+d;
        }
        else{
            cout<<Vec[3]*(Vec[1]/Vec[0]);
        }
        cout<<endl;
    }
}