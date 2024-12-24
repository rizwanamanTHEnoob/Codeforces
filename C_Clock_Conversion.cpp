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
        string temp;
        temp += s[0];
        temp += s[1];
        int val = stoi(temp);
        if (s[0] == '0' && s[1] == '0')
        {
            cout << "12:" << s[3] << s[4] << " AM" << endl;
        }
        else if (val < 12)
        {
            cout << s << " AM" << endl;
        }
        else if (val == 12)
        {
            cout << s << " PM" << endl;
        }
        else
        {
            if (val - 12 < 10)
                cout << '0' << val - 12 << ":" << s[3] << s[4] << " PM" << endl;
            else
            {
                cout << val - 12 << ":" << s[3] << s[4] << " PM" << endl;
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