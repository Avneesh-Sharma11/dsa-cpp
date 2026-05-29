#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int x = 0;
    while (t--)
    {
        string op;
        cin>>op;
        if(op == "X++"){
            x++;
        }else if(op == "++X"){
            ++x;
        }else if(op == "X--"){
            --x;
        }else{
            x--;
        }
    }
    cout<<x<<endl;
}