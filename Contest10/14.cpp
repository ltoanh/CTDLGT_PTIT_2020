#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair<int, int>
#define vii vector<ii>
#define vi vector<int>
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int n, m, u;
int d[1007];
vii a[1007];

void Dijkstra()
{
    priority_queue<ii, vii, greater<ii> > q;
    for (int i = 1; i <= n; ++i)
    {
        d[i] = INT_MAX;
    }
    d[u] = 0;
    q.push({0, u});
    while (!q.empty())
    {
        int v = q.top().S;
        q.pop();
        for (int i = 0; i < a[v].size(); ++i)
        {
            int x = a[v][i].S, w = a[v][i].F;
            if (d[x] > d[v] + w)
            {
                d[x] = d[v] + w;
                q.push({d[x], x});
            }
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << d[i] << " ";
    cout << endl;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> u;
        for (int i = 1; i <= n; ++i)
            a[i].clear();
        int x, y, w;
        for (int i = 1; i <= m; ++i)
        {
            cin >> x >> y >> w;
            a[x].pb({w, y});
            a[y].pb({w, x});
        }
        Dijkstra();
    }
}
