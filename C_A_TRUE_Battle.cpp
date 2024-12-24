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
        int size;
        cin >> size;
        string s;
        cin >> s;
        bool isFound = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (s.substr(i, 2) == "11")
            {
                isFound = true;
            }
        }
        if (isFound || s[0] == '1' || s[size - 1] == '1')
            cout << "YES" << el;
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