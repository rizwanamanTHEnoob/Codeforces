#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s, t;
        cin >> s >> t;
        stack<char> st;
        int size = t.size();
        for (int i = size - 1; i >= 0; i--)
        {
            st.push(t[i]);
        }
        size = s.size();
        for (int i = 0; i < size; i++)
        {
            if (st.empty() && s[i] == '?')
            {
                s[i] = 'x';
            }
           
            if (!st.empty() && s[i] == st.top())
            {
                st.pop();
            }
            else if (!st.empty() && s[i] == '?')
            {
                s[i] = st.top();
                st.pop();
            }
        }

        if (st.empty())
        {
            cout << "YES" << el;
            cout << s << el;
        }
        else
        {
            cout << "NO" << el;
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