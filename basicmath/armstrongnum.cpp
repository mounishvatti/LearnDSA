#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter any integer: ";
    cin >> n;
    int digits = log10(n)+1;
	int armnum = 0;
	int dup = n;

	while(n>0){
		int ld = n % 10;
		armnum += pow(ld,digits);
		n/=10;
	}

	if(dup == armnum){
		cout << "true";
	}

	else cout << "false";

    return 0;
}