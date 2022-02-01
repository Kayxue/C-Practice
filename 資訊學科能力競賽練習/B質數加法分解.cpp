#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void primeAdd(int toGet, vector<int> subArr, vector<int> &result)
{
    for (int i = subArr.size() - 1; i >= 0; i--)
    {
        if (toGet - subArr[i] == 0)
        {
            result.push_back(subArr[i]);
            result.push_back(-2);
            return;
        }
        if (toGet - subArr[i] > 0)
        {
            result.push_back(subArr[i]);
            for (int k = subArr.size() - i; k > 0; k--)
            {
                subArr.pop_back();
            }
            primeAdd(toGet - subArr[i], subArr, result);
        }
        else if (toGet - subArr[i] < 0)
        {
            continue;
        }
        if (result.back() == -1)
        {
            result.pop_back();
            result.pop_back();
            continue;
        }
        else if (result.back() == -2)
        {
            return;
        }
    }
    result.push_back(-1);
    return;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> primes;
    primes.push_back(2);
    for (int i = 3; i < 1000000; i++)
    {
        bool is = true;
        for (int j = 0; primes[j] <= sqrt(i); j++)
        {
            if (i % primes[j] == 0)
            {
                is = false;
                break;
            }
        }
        if (is)
            primes.push_back(i);
    }
    int willIn;
    cin >> willIn;
    vector<int> inputs;
    inputs.resize(willIn);
    for (int &input : inputs)
    {
        cin >> input;
    }
    for (int input : inputs)
    {
        int indexStart = 0;
        int indexEnd = primes.size();
        int middle = (primes.size() - 1) / 2;
        int index = -1;
        while (indexEnd - indexStart > 1)
        {
            if (primes[middle] > input)
            {
                indexEnd = middle;
                middle = (indexStart + indexEnd) / 2;
            }
            else if (primes[middle] < input)
            {
                indexStart = middle;
                middle = (indexStart + indexEnd) / 2;
            }
            else
            {
                index = middle;
                break;
            }
        }
        if(primes[middle]==input){
            index=middle;
        }
        if (index == -1)
        {
            cout << "0" << endl;
            continue;
        }
        vector<int> toCalculate = {primes.begin(), primes.begin() + index};
        vector<int> result;
        primeAdd(primes[index], toCalculate, result);
        if(result[0]==-1)result[0]=primes[index];
        else result.pop_back();
        for (int k : result)
        {
            cout << k << " ";
        }
        cout<<endl;
    }
    return 0;
}
