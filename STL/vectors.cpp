#include <iostream>
#include<vector>
using namespace std;

int main(){
    //vector is dynamic in nature unlike an array where the size is fixed;
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> pairvector; 
    pairvector.push_back({3, 4});
    pairvector.emplace_back(5,6);

    //vector<int> v(5, 100);
    //vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    //iterators
    vector<int>::iterator it = v.begin();

    it++;
    cout << *it << " ";
    cout<<endl;

    vector<int>::iterator i = v.end();
    i--;
    cout << *i << " ";
    cout<<endl;

    //ways of iterating through a vector

    //Method 1;
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;

    //Method 2;
    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;

    //Method 3;
    for(auto it : v){
        cout << it << " ";
    }

    // Deletion - to delete the elements of the vector
    // we use the .erase() function to do it
    vector<int> v3;

    v3.push_back(10);
    v3.emplace_back(20);
    v3.emplace_back(30);
    v3.emplace_back(40);
    v3.emplace_back(50);

    // {10,20,30,40,50}

    for(auto i : v3){
        cout << i << " ";
    }
    cout << endl;

    v3.erase(v3.begin()+1); // {10,30,40,50}

    for(auto i : v3){
        cout << i << " ";
    }
    //deleting a range (start,end+1)

    v3.erase(v3.begin()+1,v3.begin()+3); //{10,50}

    // Insertion -> vec.insert(pos);

    v3.insert(v3.begin(), 0); // {0,10,50}
    v3.insert(v3.begin(), 2, 40); // {40,40,0,10,50}  2 occurances of 40 at the beginning

    // {40,40,0,10,50}
    v3.size(); // 5

    // {40,40,0,10,50}
    v3.pop_back(); //removes the last element

    v3.clear(); //erases the entire vector

    v3.swap(v2); //swapping two vectors v3 & v2

    v3.empty(); //returns a boolean value True or False 

    // true if vector is empty, else false.

    return 0;
}