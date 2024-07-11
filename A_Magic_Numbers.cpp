#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    string s;
    cin >> s;
    bool ans = true;
    if (s[0] != '1')
    {
        ans = false;
    }
    int n = s.size();
    int x = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != '1' and s[i] != '4')
        {
            ans = false;
            break;
        }
        if (s[i] == '4')
        {
            x++;
        }
        else
        {
            x = 0;
        }
        if (x > 2)
        {
            ans = false;
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}