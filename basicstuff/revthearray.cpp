#include <iostream>
using namespace std;

int main() {
    int T;
	cout << "Enter the number of testcases: ";
    cin >> T;

    while (T >= 1) {
        int N, M;
		cout<<"Enter the no of elements in the array and index from where you want to reverse the array: ";
        cin >> N >> M;

        if (N < 0 || M >= N) {
            cout << "Invalid input: N should be greater than M" << endl;
            return 1; // Exit with an error code
        }

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        for (int i = N; i <= (N+M)/2; i--) {
            int temp = arr[i];
            arr[i] = arr[N + M - i];
            arr[N + M - i] = temp;
        }
		//output
		cout<<"The desired output is: ";
        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }

        T--;
    }

    return 0;
}
