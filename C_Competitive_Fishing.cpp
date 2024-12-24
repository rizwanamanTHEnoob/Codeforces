#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
ll groupNumber(int n, int k, string s, int prefixAlice[], int prefixBob[])
{
    bool possible = false;
    int group = 0;
    int lastAlice = prefixAlice[n];
    int lastBob = prefixBob[n];
    for (int i = 1; i < n; i++)
    {
        ll alice = (lastAlice - prefixAlice[i]) * i;
        ll bob = (lastBob - prefixBob[i]) * i;
        if (alice - k >= bob)
        {
            possible = true;
            group = i + 1;
            break;
        }
    }
    if (possible)
    {
        return group;
    }
    else
    {
        return -1;
    }
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int prefixAlice[n + 1], prefixBob[n + 1];
        int suffixAlice[n + 1], suffixBob[n + 1];
        
        prefixAlice[0] = 0;
        prefixBob[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
            {
                prefixAlice[i] = prefixAlice[i - 1] + 1;
                prefixBob[i] = prefixBob[i - 1];
            }
            else if (s[i - 1] == '0')
            {
                prefixBob[i] = prefixBob[i - 1] + 1;
                prefixAlice[i] = prefixAlice[i - 1];
            }
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