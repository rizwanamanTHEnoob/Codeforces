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
        vector<string> v;
        string s1, s2;
        char term = '#';
        for (int i = 0; i < 2 * n; i += 2)
        {
            if (term == '#')
            {
                s1.push_back('#');
                s1.push_back('#');
                s2.push_back('.');
                s2.push_back('.');
                term = '.';
            }
            else
            {
                s1.push_back('.');
                s1.push_back('.');
                s2.push_back('#');
                s2.push_back('#');
                term = '#';
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                v.push_back(s1);
                v.push_back(s1);
            }
            else
            {
                v.push_back(s2);
                v.push_back(s2);
            }
        }
        for (auto i : v)
        {
            cout << i << endl;
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