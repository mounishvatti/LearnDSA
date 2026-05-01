#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <array>
#include <utility>
#include <numeric>
#include <limits>
#include <climits>
#include <cmath>
using namespace std;

class Test{
public:
    Test(){
        cout << "Default constructer called"<<endl;
    }

    ~Test(){
        cout << "Destructor called"<<endl;
    }
};

int main(){

    int Number;
    int number;
    int NUMBER;

    int string = 10;

    cout << string<<endl;

    int _$_$_$_$_ = 10;

    Test t1; // statically created

    cout << "Hi there"<<endl;
    
    Test *t2 = new Test; // dynamically created, destructor should be called manually;

   // delete t2;

    cout << "Hi there again"<<endl;

   delete t2;

return 0;
}