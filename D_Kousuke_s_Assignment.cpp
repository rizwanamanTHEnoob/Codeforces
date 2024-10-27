#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void print(int arr[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
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
            cin >> arr[i];
        int prefixSum[n + 1];
        prefixSum[0] = 0;
        map<int, int> mp;
        int zeroCount = 0;
        for (int i = 1; i <= n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
            if (prefixSum[i] == 0)
                zeroCount++;
            mp[prefixSum[i]]++;
        }
        print(prefixSum,n);
        int count = 0;
        for (auto it : mp)
        {
            if ((it.second % 2 == 0) and (it.second != 0))
            {
                count++;
            }
            // cout << it.first << ' ' << it.second << endl;
        }
        //count += (zeroCount / 2);
        //cout << count << endl;
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