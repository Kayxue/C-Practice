#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> primeNums;
    primeNums.push_back(2);
    int findend = sqrt(100000000);
    for (int i = 2; i <= findend; i++)
    {
        bool is = true;
        if (i % 2 == 0 && i != 2)
        {
            is = false;
        }
        int end = (int)sqrt(i);
        for (int j = 0; primeNums[j] <= end && is; j++)
        {
            if (i % primeNums[j] == 0)
            {
                is = false;
            }
        }
        if (is)
        {
            primeNums.push_back(i);
            primeNums.capacity();
        }
    }
    long long in;
    cin >> in;
    for (int num : primeNums)
    {
        if (num > sqrt(in))
        {
            break;
        }
        int counter = 0;
        while (in > 1 && in % num == 0)
        {
            counter++;
            in /= num;
        }
        if (counter > 0)
        {
            if (counter == 1)
            {
                cout << num;
            }
            else
            {
                cout << num << "^" << counter;
            }
            if (in != 1)
            {
                cout << " * ";
            }
        }
    }
    if (in > 1)
        cout << in;
    return 0;
}
