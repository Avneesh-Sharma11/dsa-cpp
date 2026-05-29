#include <iostream>
#include <vector>
using namespace std;
int PrintS(int idx, int sum, int target, int arr[], int n)
//Count the Subsequence with sum of target...
{
    if (idx == n)
    {
        if (sum == target)
        {
            return 1;
        }
        return 0;
    }
    sum += arr[idx];
    int l = PrintS(idx + 1, sum, target, arr, n);
    sum -= arr[idx];
    int r = PrintS(idx + 1, sum, target, arr, n);
    return l + r;
}


// bool PrintS(int idx, int sum, int target, vector<int> ds, int arr[], int n)
////Print the first Subsequence of the sum of target...
// {
//     if (idx == n)
//     {
//         if (sum == target)
//         {
//             for (int num : ds)
//             {
//                 cout << num << " ";
//             }
//             cout << endl;
//             return true;
//         }
//         return false;
//     }
//     ds.push_back(arr[idx]);
//     sum += arr[idx];
//     if(PrintS(idx + 1, sum, target, ds, arr, n)){
//         return true;
//     }
//     sum -= arr[idx];
//     ds.pop_back();
//     if(PrintS(idx + 1, sum, target, ds, arr, n)){
//         return true;
//     }
//     return false;
// }


// void PrintS(int idx, int sum, int target, vector<int> ds, int arr[], int n)
// //Print all Subsequence of the sum == target...
// {
//     if (idx == n)
//     {
//         if (sum == target)
//         {
//             for (int num : ds)
//             {
//                 cout << num << " ";
//             }
//             cout << endl;
//         }
//         return ;
//     }
//     ds.push_back(arr[idx]);
//     sum += arr[idx];
//     PrintS(idx + 1, sum, target, ds, arr, n);
//     sum -= arr[idx];
//     ds.pop_back();
//     PrintS(idx + 1, sum, target, ds, arr, n);
// }
int main()
{
    int arr[3] = {1,2,1};
    int n = 3;
    int target = 2;
    cout<<PrintS(0, 0, target,arr, n);

    return 0;
}