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
        string a, b;
        cin >> a;
        int size = a.size();
        for (int i = size - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
            {
                b.push_back('q');
            }
            else if (a[i] == 'q')
            {
                b.push_back('p');
            }
            else
            {
                b.push_back(a[i]);
            }
        }
        cout << b << el;
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