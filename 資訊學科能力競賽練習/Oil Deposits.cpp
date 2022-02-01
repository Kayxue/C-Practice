#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

vector<string> table;
int wouldInX, wouldInY;

void pick(int y, int x)
{
    table[y][x]='*';
    for (int i=max(0,y-1);i<=min(wouldInY-1,y+1);i++){
        for(int k=max(0,x-1);k<=min(wouldInX-1,x+1);k++){
            if(y==i&&x==k){
                continue;
            }
            if(table[i][k]=='@'){
                pick(i,k);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    while (cin >> wouldInY >> wouldInX)
    {
        if (wouldInY == 0 && wouldInX == 0)
        {
            break;
        }
        int count = 0;
        table.clear();
        table.resize(wouldInY);
        for (string &data : table)
        {
            cin >> data;
        }
        for (int i = 0; i < wouldInY; i++)
        {
            for (int k = 0; k < wouldInX; k++)
            {
                if (table[i][k] == '@')
                {
                    count++;
                    pick(i, k);
                }
            }
        }
        cout<<count<<endl;
    }
}
