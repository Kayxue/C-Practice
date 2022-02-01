#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int leftCount, rightCount, maxCount=0;
    vector<int> leftGender, rightGender;
    vector<vector<int>> result;
    cin >> leftCount >> rightCount;
    leftGender.resize(leftCount);
    rightGender.resize(rightCount);
    for (int &left : leftGender)
    {
        cin >> left;
    }
    for (int &right : rightGender)
    {
        cin >> right;
        right = !right;
    }
    for (int rightIndex = 0; rightIndex < rightGender.size(); rightIndex++)
    {
        vector<int> toPush(leftCount);
        for (int leftIndex = 0; leftIndex < leftGender.size(); leftIndex++)
        {
            if (leftGender[leftIndex] == rightGender[rightIndex])
            {
                if (leftIndex == 0 || rightIndex == 0)
                {
                    toPush[leftIndex] = 1;
                }
                else
                {
                    toPush[leftIndex] = result[rightIndex - 1][leftIndex - 1] + 1;
                }
            }
            else
            {
                if (leftIndex == 0 && rightIndex == 0)
                {
                    toPush[leftIndex] = 0;
                }
                else if (leftIndex == 0)
                {
                    toPush[leftIndex] = result[rightIndex - 1][leftIndex];
                }
                else if (rightIndex == 0)
                {
                    toPush[leftIndex] = toPush[leftIndex - 1];
                }
                else
                {
                    toPush[leftIndex] = max(result[rightIndex - 1][leftIndex], toPush[leftIndex-1]);
                }
            }
            if (toPush[leftIndex] > maxCount)
            {
                maxCount = toPush[leftIndex];
            }
        }
        result.push_back(toPush);
    }
    cout << maxCount;
}
