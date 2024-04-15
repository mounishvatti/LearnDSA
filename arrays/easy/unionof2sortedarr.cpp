#include <bits/stdc++.h>
using namespace std;

vector<int> unionOf(vector<int> &v1, vector<int> &v2)
{
    vector<int> result;
    set<int> st;
    int n = v1.size();
    int m = v2.size();

    for (int i = 0; i < n; i++)
    {
        st.insert(v1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(v2[i]);
    }

    for (auto it : st)
    {
        result.push_back(it);
    }
    return result;
}

int main()
{
    vector<int> v1;
    vector<int> v2;
    cout << "Enter the size of first array: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    cout << "Enter the size of second array: ";
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        v1.push_back(y);
    }
    vector<int> unionArr = unionOf(v1, v2);
    for (auto i : unionArr)
    {
        cout << i << " ";
    }
    return 0;
}