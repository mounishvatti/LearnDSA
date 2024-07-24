#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeElements(vector<int> &arr) // this is one approach in brute force
{ // brute force
    int n = arr.size();
    queue<int> pos;
    queue<int> neg;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos.push(arr[i]);
        else
            neg.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr[2*i] = pos.front();
        pos.pop();
        arr[2*i+1] = neg.front();
        neg.pop();
    }

    return arr;
}

// better approach

vector<int> rearrangeElementsOptimal(vector<int> &arr)
{ // brute force
    int n = arr.size();
    int pos = 0;
    int neg = 1;
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            res[pos] = arr[i];
            pos += 2;
        }
        else if (arr[i] < 0)
        {
            res[neg] = arr[i];
            neg += 2;
        }
    }
    return res;
}

// if pos != neg
vector<int> rearrangeElements3(vector<int> &arr)
{ // brute force
    int n = arr.size();

    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
    }

    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            arr[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            arr[index] = neg[i];
            index++;
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {-3, 2, 1, -4, 5, -6, -7, 9};
    vector<int> arr1 = {-3, -2, 1, -4, 5, -6, -7, 9};
    vector<int> ans = rearrangeElements3(arr1);
    vector<int> ans1 = rearrangeElementsOptimal(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto i : ans1)
    {
        cout << i << " ";
    }
}