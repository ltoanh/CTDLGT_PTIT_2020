//wr

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

int dx[] = {-1, 0, 1, 0}; 
int dy[] = {0, -1, 0, 1}; 

int n, m;
int d[507][507], a[507][507], vis[507][507];


struct Cell{ 
    int cost;
	int x; 
    int y;  
}; 

class mycomparison 
{ 
public: 
  bool operator() (const Cell &lhs, const Cell &rhs) const
  { 
    return (lhs.cost > rhs.cost); 
  } 
}; 


bool isSafe(int x, int y){ 
    return x >= 1 && x <= m && y >= 1 && y <= n; 
} 

void Dijkstra()
{
	priority_queue<Cell, vector<Cell>, mycomparison> q;   
    for (int i = 1; i <= n; ++i)
    	for(int j=1; j <= m; ++j){
    		d[i][j]=1e7;
    		vis[i][j]=0;
		}
    d[1][1] = a[1][1]; 
    q.push({a[1][1], 1, 1}); 
    while (!q.empty())
    {
        Cell v = q.top(); q.pop();
        int x = v.x, y = v.y;
        if(vis[x][y]) continue;
        vis[x][y] = 1;
        for(int i=1; i<=4; ++i){
        	int next_x = x + dx[i], next_y = y + dy[i];
        	if(isSafe(next_x, next_y) && !vis[next_x][next_y]){
        		d[next_x][next_y] = min(d[next_x][next_y], d[x][y] + a[next_x][next_y]);
        		q.push({d[next_x][next_y], next_x, next_y});
			}
		}
    }
    cout<<d[n][m]<<endl;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; ++i)
        	for(int j=1; j<= m; ++j) cin >> a[i][j];
        Dijkstra();
    }
}
