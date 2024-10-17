#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int letMax = v[i];
            int temp = 1;
            bool isTaken = false;
            for (int j = 0; j < n; j++)
            {
                if ((i % 2) != (j % 2))
                    continue;

                if (v[j] == letMax and !isTaken)
                {
                    temp += letMax;
                    isTaken = true;
                }
                else
                    temp++;
            }

            ans = max(ans, temp);
        }
        cout << ans << endl;
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
