#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (true)
    {
        if (a == 1)
        {
            cout << "1";
            break;
        }
        else
        {
            cout << a << ", ";
            if (a % 2)
            {
                a = a * 3 + 1;
            }
            else
            {
                a /= 2;
            }
        }
    }
}