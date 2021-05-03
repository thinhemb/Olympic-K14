#include <bits/stdc++.h>

using namespace std;

const long long oo = LLONG_MAX;
const int maxn = 1e5+5;
typedef pair<long long, int> pa;
vector <pa> a[maxn];
vector <long long> d(maxn, oo);
int previous[maxn];
int n, m;

void dijkstra()
{
    priority_queue <pa, vector<pa>, greater<pa> > pq;
    long long u, v, du, uv;
    pq.push(make_pair(0, 1));
    while (pq.size())
    {
        u = pq.top().second;
        du = pq.top().first;
        pq.pop();
        if (du != d[u])
            continue;
        for (pa i: a[u])
        {
            v = i.second;
            uv = i.first;
            if (d[v] > du + uv)
            {
                d[v] = du + uv;
                pq.push(make_pair(d[v], v));
                previous[v] = u;
            }
        }
    }

}
void ans(int x)
{
    if (x == 0)
        return;
    else
        ans(previous[x]);
    cout << x << ' ';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie();
    int u, v, w;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        cin >> u >> v >> w;
        a[v].push_back(make_pair(w, u));
        a[u].push_back(make_pair(w, v));
    }

    d[1] = 0;
    dijkstra();
    if (d[n] == oo)
        cout <<-1;
    else
        ans(n);
}
