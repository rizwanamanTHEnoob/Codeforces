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
        int countA = 0;
        int countB = 0;
        int canNotBomb = 0;
        int size = s.length();
        for (int i = size - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
                countB++;
            if (s[i] == 'A')
            {
                if (countB == 0)
                {
                    canNotBomb++;
                }
                else
                {
                    countB--;
                }
            }
        }
        cout << (countB % 2) + canNotBomb << endl;
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