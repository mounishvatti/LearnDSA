/*
Problem: Cost of Balloons

https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin >> N;
	while(N--){
		int costgreen, costpurple;
		cin >> costgreen >> costpurple;

		int num_of_p;
		cin >> num_of_p;

		int mincost1 =0; 
		int mincost2 =0;

		for(int i=0; i<num_of_p; i++){
			int arr[2];
			cin >> arr[0] >> arr[1];

			mincost1 += arr[0]*costgreen + arr[1]*costpurple;
			mincost2 += arr[1]*costgreen + arr[0]*costpurple;
		}
		cout << min(mincost1, mincost2) << endl;
	}
	return 0;
};
