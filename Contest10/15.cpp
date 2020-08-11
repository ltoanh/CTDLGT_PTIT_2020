#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back

using namespace std;

int t, n, m, u;
int d[1007], G[1007][1007];

void solve()
{
    d[u] = 0;
    for (int k = 2; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
            {
                int tmp = d[i] + G[i][j];
                if (d[j] > tmp && d[i] != 1e7 && G[i][j] != 1e7)
                {
                    d[j] = tmp;
                }
            }
    //Ktra chu trinh am
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            int tmp = d[i] + G[i][j];
            if (d[j] > tmp && d[i] != 1e7 && G[i][j] != 1e7)
            {
                cout << -1 << endl;
                return;
            }
        }
    for (int i = 1; i <= n; ++i)
    {
        if (d[i] == 1e7)
            cout << "INFI ";
        else
            cout << d[i] << " ";
    }
    cout << endl;
}

main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> u;
        for (int i = 1; i <= n; ++i)
        {
            d[i] = 1e7;
            for (int j = 1; j <= n; ++j)
                G[i][j] = 1e7;
        }
        int x, y, w;
        for (int i = 1; i <= m; ++i)
        {
            cin >> x >> y >> w;
            G[x][y] = w;
        }
        solve();
    }
}
