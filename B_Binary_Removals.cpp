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
        string s;
        cin >> s;
        bool doubleZero = false;
        int size = s.size();
        for (int i = 0; i < size - 1; i++)
        {
            if (s[i] == '1' and s[i + 1] == '1')
            {
                for (int j = i + 1; j < size - 2; j++)
                {
                    if (s[j + 1] == '0' && s[j + 2] == '0')
                    {
                        doubleZero = true;
                        break;
                    }
                }
            }
        }
        if (doubleZero)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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