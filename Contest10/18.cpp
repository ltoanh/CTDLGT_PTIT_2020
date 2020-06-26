#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair<ll, ll>
#define vii vector<ii>
#define vi vector<ll>
#define pb push_back
#define F first
#define S second

using namespace std;

int n, m, u;
ll d[100007];
vii a[100007];

void Dijkstra()
{
	ll u = 1, res = 0;
    priority_queue< ii, vii, greater<ii> > q;
    for (int i = 1; i <= n; ++i){
        d[i] = 1e7;
    }
    d[u] = 0;
    q.push({0, u});
    while (!q.empty())
    {
        ll v = q.top().S;
        q.pop();
        for (int i = 0; i < a[v].size(); ++i)
        {
            ll x = a[v][i].S, w = a[v][i].F;
            if (d[x] > d[v] + w)
            {
            	if(x == n) res = 1;
                d[x] = d[v] + w;
                q.push({d[x], x});
            }
            else if(d[x] == d[v] + w && x == n) res++;
        }
    }
    cout<<d[n] << " " << res;
}

main()
{
    int t = 1;
//    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; ++i)
            a[i].clear();
        ll x, y, w;
        for (int i = 1; i <= m; ++i)
        {
            cin >> x >> y >> w;
            a[x].pb({w, y});
            a[y].pb({w, x});
        }
        Dijkstra();
    }
}
