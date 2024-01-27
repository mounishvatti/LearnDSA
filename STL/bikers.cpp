#include <bits/stdc++.h>
#include <cmath>
using namespace std;

long long distance(long long x1, long long y1, long long x2, long long y2)
{
    long long dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return dist;
}

int main()
{
    vector< pair<long long, long long>>n; // coordinates of N
    vector< pair<long long, long long>>m; // coordinates of M
    long long N, M, K;
    cin >> N >> M >> K;

    for (int i = 1; i <= N; i++)
    {
        long long xn, yn;
        cin >> xn >> yn;
        n.push_back({xn, yn});
    }

    for (int j = 1; j <= M; j++)
    {
        long long xm, ym;
        cin >> xm >> ym;
        m.push_back({xm, ym});
    }

    set<long long> result;

    for(int i=0; i<n.size(); i++){
        for(int j=0; j<m.size(); j++){
            long long dist = distance(n[i].first, n[i].second, m[i].first, m[i].second);
            result.insert(dist);
        }
    }

    long long optimal = 0;

    for (auto it : result)
    {
        cout << it << endl;
    }

    if (K == min(N, M))
    {
        int n = K;
        if (n >= 0 && n < result.size())
        {
            auto it = result.begin();
            advance(it, n);

            optimal = *it;
        }
    }
    else if (K < min(N, M))
    {
        int n = K - 1;
        if (n >= 0 && n < result.size())
        {
            auto it = result.begin();
            advance(it, n);

            optimal = *it;
        }
    }

    cout << pow(optimal, 2) << endl;
    return 0;
}
