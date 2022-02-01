#include<iostream>
#include<cstring>
#include<set>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<string> chans;
    int count;//籤數
    int result=0;//結果數
    cin>>count;
    for(int c=0;c<count;c++){
        string ins;
        cin>>ins;
        chans.insert(ins);
    }
    for(string chan:chans){
        int chanLength=chan.length();
        for(int i=1,j=chanLength-1;j-i>=0;i++,j=chanLength-i){
            if(chan.substr(0,i)==chan.substr(j,i)){//string#substr(start,length)
                string toFind=chan.substr(i,chanLength-(2*i)); 
                if(chans.count(toFind)){
                    result += 1;
                }
            }
        }
    }
    cout<<result;
    return 0;
}
