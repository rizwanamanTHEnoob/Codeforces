#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n - 1];
        int mini = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            mini = min(mini, arr[i]);
        }
        int mainArr[n];
        mainArr[0] = arr[0];
        mainArr[n - 1] = arr[n - 2];
        for (int i = 0; i < n - 2; i++)
        {
            mainArr[i + 1] = min(arr[i], arr[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << mainArr[i] << ' ';
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}