#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    int prefix[n + 1] = {0};
    set<int> st;
    int idx = 1;
    for (int i = n; i >= 1; i--)
    {
        st.insert(arr[i]);
        prefix[i] = st.size();
    }
    while (q--)
    {
        int l;
        cin >> l;
        cout << prefix[l] << el;
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