#include<bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;

        for(int i = 1; i < sqrt(n); i++){
            if(n%i==0){
                sum+=i;
                if((n/i)!=i){
                    sum += (n/i);
                }
            }
        }
	return sum;
}
int main(){
    int n = 5;
    int a[n];
    int pf[n];
    int sumall=0;

    for(int i = 0; i < n; i++){
        a[i] = i+1;
    }

    for(int j = 0; j < n; j++){
        pf[j] = sumOfDivisors(a[j]);
    }

    for(int k = 0; k < n; k++){
        sumall+=pf[k];
    }
    cout << "Sum of all the elements in array is: "<<sumall<<endl;
}
