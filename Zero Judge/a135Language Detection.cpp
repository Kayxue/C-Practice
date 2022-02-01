#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    int count = 1;
    while (cin >> input)
    {
        if (input == "#")
        {
            break;
        }
        else if (input == "HELLO")
        {
            cout << "Case " << count << ": ENGLISH";
        }
        else if (input == "HOLA")
        {
            cout << "Case " << count << ": SPANISH";
        }
        else if (input == "HALLO")
        {
            cout << "Case " << count << ": GERMAN";
        }
        else if (input == "BONJOUR")
        {
            cout << "Case " << count << ": FRENCH";
        }
        else if (input == "CIAO")
        {
            cout << "Case " << count << ": ITALIAN";
        }
        else if (input == "ZDRAVSTVUJTE")
        {
            cout << "Case " << count << ": RUSSIAN";
        }
        else
        {
            cout << "Case " << count << ": UNKNOWN";
        }
        cout<<endl;
        count++;
    }
    return 0;
}
