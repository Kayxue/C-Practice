#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<long long> inputs;
    long long wouldIn;
    cin>>wouldIn;
    inputs.resize(wouldIn);
    for(long long& input:inputs){
        cin>>input;
    }
    sort(inputs.begin(),inputs.end());
    long long result=1;
    for(long long i=2;i<=inputs[0];i++){
        bool can=true;
        for(long long k:inputs){
            if(k%i!=0){
                can=false;
                break;
            }
        }
        if(can)result=i;
    }
    cout<<result;
    return 0;
}
