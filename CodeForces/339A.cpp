#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.length() == 1){
        cout << s;
        return 0;
    }
    vector<int> nums;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '1' || s[i] == '2' || s[i] == '3'){
            nums.push_back(s[i] - '0');
        }
    }

    sort(nums.begin(), nums.end());
    string res = "";

    for (int i = 0; i < nums.size(); i++){
        res.push_back(nums[i]+'0');
        res.push_back('+');
    }
    res.pop_back();
    cout<<res;
}