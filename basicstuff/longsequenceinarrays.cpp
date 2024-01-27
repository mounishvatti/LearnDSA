#include <iostream>
using namespace std;

int main(){
    int i, j, k, n;
    int count = 0;
    int maxcount = 0;
    int temp;
    cout << "Enter size of the array: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements in the array: ";
    for(i = 0; i < n; ++i){
        cin >> array[i];
    }
    for(j = 0; j < n-1; j++){
        if (array[j] == array[j+1]){
            count++;
            temp = array[j];
        } else{
            count = 0; // reset count if sequence is not present
        }
        if (count > maxcount){
            maxcount = count;
        }
    }
    cout << "The longest sequence is : "<<maxcount+1;
    cout << "\nAnd the number is : "<<temp;
}