#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)

bool isSquareBeautiful(string &s)
{
    int size = s.length();
    int temp = size;
    size = sqrt(size);
    bool ans = true;
    int index[temp];
    for (int i = 0; i < temp; i++)
        index[i] = 0;

    if (temp = 1)
        return false;
    if (size * size != s.length())
    {
        return false;
    }

    for (int i = 0; i < size; i++)
    {
        index[i] = 1;
        if (s[i] != '1')
            return false;
    }

    for (int i = ((size * size) - size); i < size * size; i++)
    {
        index[i] = 1;
        if (s[i] != '1')
            return false;
    }

    for (int i = 0; i < size; i++)
    {
        index[i * size] = 1;
        if (s[i * size] != '1')
            return false;
    }

    for (int i = size - 1; i < size * size; i += size)
    {
        index[i] = 1;
        if (s[i] != '1')
            return false;
    }

    for (int i = 0; i < size * size; i++)
    {
        if (index[i] == 0)
        {
            if (s[i] == '1')
                return false;
        }
    }

    return true;
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (isSquareBeautiful(s))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
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
