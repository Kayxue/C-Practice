#include<iostream>
#include<vector>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> things;
    int wouldIn;
    cin>>wouldIn;
    things.resize(wouldIn);
    for(int& in:things)cin>>in;
    int sum=0;
    while(things.size()>1){
        int max=0;
        int maxIndex=0;
        for(int i=0;i<things.size();i++){
            if(things.size()==1){
                break;
            }
            if(i==0){//初端
                if(things[things.size()-1]*things[i+1]>=max){
                    max=things[things.size()-1]*things[i+1];
                    maxIndex=i;
                }
            }
            else if(i==things.size()-1){//尾端
                if(things[i-1]*things[0]>=max){
                    max=things[i-1]*things[0];
                    maxIndex=i;
                }
            }
            else{//中間
                if(things[i-1]*things[i+1]>=max){
                    max=things[i-1]*things[i+1];
                    maxIndex=i;
                }
            }
        }
        things.erase(things.begin()+maxIndex);
        sum+=max;
    }
    cout<<sum+things[0];
}
