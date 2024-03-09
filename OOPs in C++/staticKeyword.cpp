#include <bits/stdc++.h>
using namespace std;

class Test{
    public:
    static int health; // static member

    static int val(){ // static function can access only static members
        return health;
    }
};

int Test::health = 100;

int main(){
    cout << Test::health << endl; // no need to create object

    cout << Test::val() << endl;

    return 0;

}