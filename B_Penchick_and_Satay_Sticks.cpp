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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        bool notPossible = false;
        for (int i = 1; i <= n; i++)
        {
            if (abs(arr[i] - i) > 1)
            {
                notPossible = true;
                break;
            }
        }
        if (notPossible)
        {
            cout << "NO" << el;
        }
        else
        {
            cout << "YES" << el;
        }
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