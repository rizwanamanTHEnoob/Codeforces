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
         int size = s.length();
        if (s[0] == '1' and s[1] == '0' and size>2 )
        {
            if (s[2] == '0')
            {
                cout << "NO" << endl;
            }
            else
            {
                int count = 0;
                bool itsOne = false;
               
                for (int i = 2; i < size; i++)
                {
                    if (s[i] == '1')
                    {
                        itsOne = true;
                    }
                    count++;
                    if (count >= 2)
                        break;
                }
                if (count == 1 and itsOne)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
        else
            cout << "NO" << endl;
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