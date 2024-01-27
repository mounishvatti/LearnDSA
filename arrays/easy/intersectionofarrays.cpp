#include <bits/stdc++.h> 
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int n1 = arr1.size();
	int n2 = arr2.size();

	vector<int>res;
	int vis[m]={0};

	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			if(arr1[i]==arr2[j] && vis[j]==0){
				res.push_back(arr1[i]);
				vis[j]=1;
				break;
			}
			if(arr2[j]>arr1[i]) break;
		}
	}

	return res;
}

//optimal O(n+m)

/*

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Sort the arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    vector<int> res;

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            res.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    return res;
}

*/