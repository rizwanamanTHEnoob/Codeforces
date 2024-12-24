#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int t;
    cin >> t;
    // vector<int> v = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10100, 11000, 11001, 10110, 11010, 11100, 11101, 11110, 11111, 100000};
    vector<ll> v2;
    v2.push_back(10);
    v2.push_back(11);
    ll i = 1;
    ll maxi = 1e5;
    ll x = 10;
    while (x < maxi)
    {
        x *= 10;
        v2.push_back(x);
        v2.push_back(x + 1);
        x = v2[i++];
    }
    while (t--)
    {
        int n;
        cin >> n;
        ll size = v2.size();
        bool found = false;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (v2[j] == n)
                {
                    found = true;
                    break;
                }
                else if (v2[j] * v2[j] == n)
                {
                    found = true;
                    break;
                }
                else if (v2[i] * v2[j] == n)
                {
                    found = true;
                    break;
                }
                else if (v2[i] * v2[j] * v2[j] == n)
                {
                    found = true;
                    break;
                }
                else if ((1LL * v2[i] * v2[i] * v2[j] * v2[j]) == n)
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
        {
            cout << "YES" << el;
        }
        else
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