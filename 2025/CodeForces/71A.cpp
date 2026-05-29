#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string res;
        int n = s.length();
        if (n > 10)
        {
            int num = n - 2;
            res.push_back(s[0]);
            res += to_string(num);
            res.push_back(s[n - 1]);
            cout << res << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}