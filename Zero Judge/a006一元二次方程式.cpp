#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if(pow(b,2)-4*a*c>0){
            cout<<"Two different roots x1="<<(b*-1+sqrt(pow(b,2)-4*a*c))/(2*a)<<" , x2="<<(b*(-1)-sqrt(pow(b,2)-4*a*c))/(2*a);
        }
        else if(pow(b,2)-4*a*c==0){
            cout<<"Two same roots x="<<(b*-1)/(2*a);
        }
        else{
            cout<<"No real root"<<endl;
        }
    }
}