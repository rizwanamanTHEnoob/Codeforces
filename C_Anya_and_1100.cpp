#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
int count1100(string s)
{
    int count = 0;
    int n = s.size();
    for (int i = 0; i < n - 3; i++)
    {
        if (s.substr(i, 4) == "1100")
        {
            count++;
        }
    }
    return count;
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int q;
        cin >> q;
        int count = count1100(s);
        while (q--)
        {
            int index;
            char value;
            cin >> index >> value;
            index--;
            int size = s.size();
            if (s[index] != value)
            {
                int left = max(0, index - 3);
                int right = min(index + 3, (int)s.size() - 1);
                for (int i = left; i <= right && i < size - 3; i++)
                {
                    if (s.substr(i, 4) == "1100")
                    {
                        count--;
                    }
                }
                s[index] = value;
                for (int i = left; i <= right && i < size - 3; i++)
                {
                    if (s.substr(i, 4) == "1100")
                    {
                        count++;
                    }
                }
            }
            if (count > 0)
            {
                cout << "YES" << el;
            }
            else
            {
                cout << "NO" << el;
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
