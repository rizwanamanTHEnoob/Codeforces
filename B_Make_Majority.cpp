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
        string s;
        cin >> s;
        int one = 0;
        bool zero = false;
        int zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            if (s[i] == '0')
            {
                if (!zero)
                {
                    zero = true;
                    zeroCount++;
                }
            }
            else
                zero = false;
        }
        if (zeroCount >= one)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
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