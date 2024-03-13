#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,2,3,4,5,6,7,8};

    int hashmap[100] = {0};
    int size = arr.size();

    for(int i = 0; i < size; i++){
        hashmap[arr[i]] += 1;
    }

    for(int i = 0; i < 100; i++){
        cout  << i << ": " << hashmap[i] << endl;
    }

    return 0;
}
