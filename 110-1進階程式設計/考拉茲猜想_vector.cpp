#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    int in;
    cin >> in;
    vec.push_back(in);
    while (true)
    {
        if (vec.back() == 1)
        {
            break;
        }
        else
        {
            if (vec.back() % 2 == 1)
            {
                vec.push_back(vec.back() * 3 + 1);
            }
            else
            {
                vec.push_back(vec.back() / 2);
            }
            vec.capacity();
        }
    }
    for (int a : vec)
    {
        cout << a;
        if (a != vec.back())
        {
            cout << ", ";
        }
    }
    return 0;
}
