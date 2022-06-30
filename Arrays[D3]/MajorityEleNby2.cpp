#include <bits/stdc++.h>
using namespace std;
// moore voting algo
int majorityElement(vector<int> &nums)
{
    int cnt = 0;
    int ele = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (cnt == 0)
        {
            ele = nums[i];
        }
        if (ele == nums[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return ele;
}