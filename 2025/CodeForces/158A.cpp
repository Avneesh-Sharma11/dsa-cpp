#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    vector<int> nums;
    while (n--)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int s = nums[k - 1];
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= s && nums[i] > 0) cnt++;
    }
    cout << cnt;
}