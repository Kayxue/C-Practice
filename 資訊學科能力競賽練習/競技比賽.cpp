#include <iostream>
#include <vector>
using namespace std;

struct Data
{
    int defend, attack;
};

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int wouldIn;
    cin >> wouldIn;
    vector<Data> competitors;
    vector<int> competitors_wins;
    competitors.resize(wouldIn);
    for (Data &competitor : competitors)
    {
        cin >> competitor.attack >> competitor.defend;
    }
    for (int i = 0; i < competitors.size(); i++)
    {
        int wins = 0;
        for (int j = i - 1; j >= 0; j -= 1)
        {
            if (competitors[i].attack >= competitors[j].attack && competitors[i].defend >= competitors[j].defend)
            {
                wins++;
            }
            else
                break;
        }
        for (int j = i + 1; j < competitors.size(); j++)
        {
            if (competitors[i].attack >= competitors[j].attack && competitors[i].defend >= competitors[j].defend)
            {
                wins++;
            }
            else
                break;
        }
        competitors_wins.push_back(wins);
    }
    for (int a = 0; a < competitors_wins.size(); a++)
    {
        cout << a + 1 << ":" << competitors_wins[a] << endl;
    }

    return 0;
}
