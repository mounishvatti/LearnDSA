//Sum of even & odd

/*
Write a program to input an integer "n" and print the sum of all of its even and the sum of its odd digits separately.

Digits mean numbers, not places!(index values). That is, if the given integer is "132456", even digits are 2, 4 and 6, and the odd digits are 1, 3 and 5.
*/

#include <iostream>
using namespace std;

int main() 
{
    int num;
    int sum_even=0;
    int sum_odd=0;
	int n;
    cin>>num;

    string numstr = to_string(num);
    int len = numstr.size();
    cout << "length: " << len << endl;

	while(len>0){
		n = num%10;
		num = num/10;
		cout << n << "\t" << num << endl;

		if(n%2==0){
			sum_even+=n;
		}
		else{
			sum_odd+=n;
		}
		len--;
	}
	cout << sum_even << "\t" << sum_odd;

    return 0;
}