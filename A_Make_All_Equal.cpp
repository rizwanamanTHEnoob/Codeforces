#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define ll long long int
#define loop(n) for (int i = 0; i < n; i++)
void solve()
{
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int temp=n;
        map<int,int>mp;
        while(temp--){
            int x;
            cin>>x;
            mp[x]++;
        }
        int maxFreq=0;
        for(auto i:mp){
            maxFreq=max(maxFreq,i.second);
        }
        cout<<n-maxFreq<<endl;

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