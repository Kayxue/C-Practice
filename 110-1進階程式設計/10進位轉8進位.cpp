#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    int input;
    cin>>input;
    while(input>0){
        vec.push_back(input%8);
        input /= 8;
        vec.capacity();
    }
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i];
    }
    return 0;
}
