// pairs in c++ (C++ Standard Template Library -  STL)
#include <bits/stdc++.h>
using namespace std;

int main(){

    pair<int, int> p = {1, 2};   // Declare a pair object with two integers.
    cout << "First element of the pair p: " << p.first << endl << "First element of the pair p: " << p.second << endl;
    //updating the values of the pairs
    p.first = 2;
    p.second = 3;

    cout << "After updatind the values" << endl;
    cout << "First element of the pair p: " << p.first << endl << "First element of the pair p: " << p.second << endl;
    pair<int, pair<int, int>> p1 = {1,{2,3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
    pair<int, int> arr1[] = {{1,2},{2,3},{3,4},{4,5}};
    
    cout << "1st element of the array " << arr1[0].first;
    pair<double, double> doublepair = {5.6234, 7.891834};
    cout << "\nThe sum is : " << (doublepair.first + doublepair.second) << endl;

    // pair<int, int> p2;
    // cout << "Enter the values of the pair p2: ";
    // cin >> p2.first >> p2.second;
    // cout << "First element of the pair p2: " << p2.first << endl << "First element of the pair p: " << p2.second << endl;

    pair<string, string> fullname = {"Mounish", "Vatti"};

    string first_name = fullname.first;
    string last_name = fullname.second;
    cout << "Your first name is: " << first_name << " & your last name is: " << last_name << endl;

    pair<pair<string, string>, pair<string, string>> name = {{"Jaswanth", "Srikar"}, {"Mounish", "Vatti"}};

    string name1 = name.first.first;
    string name2 = name.first.second;
    string name3 = name.second.first;
    string name4 = name.second.second;

    cout << name1 << " " << name2 << " " << name3 << " " << name4 << endl; 
    
    //arrays
    array<int,5> arr{1,2,3,4,5};
    array<string,2> namearray{"Mounish","Vatti"};

    cout << arr[0] << " " << namearray[0];

    return 0;
}