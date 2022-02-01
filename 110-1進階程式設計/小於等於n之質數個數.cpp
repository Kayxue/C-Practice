#include <iostream>
#include <cmath>
using namespace std;

bool loopin(int origin, int start, int now = 2)
{
    if (start - now < 0)
        return true;
    if (origin % now == 0 || origin % start == 0)
        return false;
    return loopin(origin, start - 1, now + 1);
}

int loopout(int now,int start=2, int counter = 0)
{
    if (now-start<0){
        return counter;
    }
    if (loopin(now, (int)sqrt(now)))
        counter++;
    if (now != start && loopin(start, (int)sqrt(start)))
        counter++;
    return loopout(now - 1,start + 1, counter);
}

int main(int argc, char const *argv[])
{
    int n, counter;
    cin >> n;
    counter = loopout(n);
    cout << counter << endl;
    return 0;
}
