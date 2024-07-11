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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n < 2 * k + 1)
        {
            cout << "NO" << endl;
        }
        else if (k == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int left = 0;
            int right = n - 1;
            bool notMatched = false;
            int count = 0;
            while (left < right)
            {
                if (s[left] != s[right])
                {
                    notMatched = true;
                    break;
                }
                left++;
                right--;
                count++;
                if (count == k)
                    break;
            }
            if (!notMatched)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
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