#include <iostream>
#include <vector>
#include <map>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<pair<string, int>>> datas;
    int wouldIn;
    cin >> wouldIn;
    datas.resize(wouldIn);
    for (vector<pair<string, int>> &data : datas)
    {
        vector<pair<string,int>> toPush;
        toPush.resize(10);
        for (pair<string,int>& p:toPush)
        {
            cin >> p.first >> p.second;
        }
        data=toPush;
    }
    for(int i=0;i<wouldIn;i++){
        cout<<"Case #"<<i+1<<":"<<endl;
        int max=1;
        for(auto data:datas[i]){
            if(data.second>max){
                max=data.second;
            }
        }
        for(auto data:datas[i]){
            if(data.second==max){
                cout<<data.first<<endl;
            }
        }
    }
    return 0;
}
