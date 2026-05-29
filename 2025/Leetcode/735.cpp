#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> arr = {5, 10, -5, -8, 12, -15, 3, -3};
    vector<int> st;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int ast = arr[i];

        if (ast > 0)
            st.push_back(ast);
        else
        {
            while (!st.empty() && st.back() > 0 && st.back() < abs(ast))
                st.pop_back();
            if (!st.empty() && st.back() == abs(ast))
                st.pop_back();
            else if (st.empty() || st.back() < 0)
                st.push_back(ast);
        }
    }
    for (int i = 0; i < st.size(); i++)
        cout << st[i] << " ";

    return 0;
}