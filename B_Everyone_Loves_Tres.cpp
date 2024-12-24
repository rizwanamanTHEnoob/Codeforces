#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
bool div(ll x)
{
    if (x % 33 == 0 and x % 66 == 0)
        return true;
    else
        return false;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1 || n == 3)
        {
            cout << -1 << el;
        }
        else if (n == 2)
        {
            cout << 66 << el;
        }
        else if (n % 2 == 0)
        {
            string s = "";
            int len = n - 2;
            for (int i = 0; i < len; i++)
            {
                s += "3";
            }
            s.push_back('6');
            s.push_back('6');
            cout << s << el;
        }
        else
        {
            string s = "";
            int len = n - 2;
            for (int i = 0; i < len; i++)
            {
                s += "3";
            }
            s.push_back('6');
            s.push_back('6');
            s[len - 2] = '6';
            cout << s << el;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // cout<<div(3336366)<<el;
    return 0;
}