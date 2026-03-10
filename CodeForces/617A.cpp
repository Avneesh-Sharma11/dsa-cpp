#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x <= 5)
    {
        cout << 1;
        return 0;
    }
    int num = INT_MAX;
    for (int i = 1; i <= 5; i++)
    {
        int steps = ceil(((x + i - 1) / i));
        num = min(num, steps);
    }
    cout << num;
    return 0;
}