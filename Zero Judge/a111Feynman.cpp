#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int sum=0;
    while(cin>>n){
        if (n==0)
        {
            break;
        }
        int bian=n;
        for(int i=1;i<=bian;i++){
            int time=bian-i;
            int ge=time+1;
            sum+=pow(ge,2);
        }
        cout<<sum<<endl;
        sum=0;
    }
}