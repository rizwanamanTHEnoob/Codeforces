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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool notWin = true;
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (abs(arr[i] - arr[j]) % k == 0)
                    {
                        flag = true;
                    }
                }
            }
            if (!flag)
            {
                notWin = false;
                cout << "YES" << el;
                cout << i + 1 << el;
                break;
            }
        }
        if (notWin)
        {
            cout << "NO" << el;
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