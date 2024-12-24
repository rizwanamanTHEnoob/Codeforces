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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool isMelody = true;
        if (n == 2)
        {
            if ((abs(arr[0] - arr[1]) != 5) && (abs(arr[0] - arr[1]) != 7))
            {
                isMelody = false;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if ((abs(arr[i] - arr[i + 1]) != 5) && (abs(arr[i] - arr[i + 1]) != 7))
            {
                isMelody = false;
                break;
            }
        }
        if (isMelody)
        {
            cout << "YES" << el;
        }
        else
            cout << "NO" << el;
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