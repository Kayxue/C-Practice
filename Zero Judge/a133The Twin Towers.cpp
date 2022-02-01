#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> tower1;
    vector<int> tower2;
    vector<vector<int>> result;
    int tw1h, tw2h;
    int counter = 1;
    while (cin >> tw1h >> tw2h)
    {
        if (tw1h == 0 || tw2h == 0)
        {
            break;
        }
        tower1.resize(tw1h);
        tower2.resize(tw2h);
        result.resize(tw2h);
        for (int &count : tower1)
        {
            cin >> count;
        }
        for (int &count : tower2)
        {
            cin >> count;
        }
        for (int y = 0; y < tw2h; y++)
        {
            vector<int> toPush;
            toPush.resize(tw1h);
            for (int x = 0; x < tw1h; x++)
            {
                if (tower1[x] == tower2[y])
                {
                    if (x == 0 || y == 0)
                    {
                        toPush[x]=1;
                    }
                    else
                    {
                        toPush[x]=result[y - 1][x - 1] + 1;
                    }
                }
                else
                {
                    if (x == 0 && y == 0)
                    {
                        toPush[x]=0;
                    }
                    else if (x == 0)
                    {
                        toPush[x]=result[y - 1][x];
                    }
                    else if (y == 0)
                    {
                        toPush[x]=toPush[x - 1];
                    }
                    else
                    {
                        toPush[x]=max(result[y - 1][x], toPush[x - 1]);
                    }
                }
            }
            result[y]=toPush;
        }
        cout << "Twin Towers #" << counter << endl;
        cout << "Number of Tiles : " << result[tw2h - 1][tw1h - 1] << endl
             << endl;
        counter++;
        tower1.clear();
        tower2.clear();
        result.clear();
    }
    return 0;
}
