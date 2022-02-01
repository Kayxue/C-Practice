#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    long long input;
    int sum = 0;
    while (cin >> input)
    {
        if (input == 0)
        {
            break;
        }
        else if (input == 1)
        {
            vec.push_back(1);
            sum += 1;
        }
        else
        {
            while (input / 2 > 0)
            {
                int toPush = input % 2;
                vec.push_back(toPush);
                if (toPush == 1)
                {
                    sum += 1;
                }
                input /= 2;
            }
            int toPush = input % 2;
            vec.push_back(toPush);
            if (toPush == 1)
            {
                sum += 1;
            }
        }
        cout<<"The parity of ";
        for(int i=vec.size()-1;i>=0;i--){
            cout<<vec[i];
        }
        cout<<" is "<<sum<<" (mod 2)."<<endl;
        vec.clear();
        sum=0;
    }
    return 0;
}
