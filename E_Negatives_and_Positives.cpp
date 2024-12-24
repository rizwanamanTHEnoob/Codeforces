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
        int countNeg = 0;
        ll allPos = 0;
        ll oneNeg = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                countNeg++;
            }
            allPos += abs(arr[i]);
            oneNeg = min(oneNeg, abs(arr[i])*1LL);
        }
        if (countNeg % 2 == 0)
        {
            cout << allPos << el;
        }
        else
        {
            cout << allPos - (oneNeg * 2) << el;
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