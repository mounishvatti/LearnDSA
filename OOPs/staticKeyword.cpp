#include <bits/stdc++.h>
using namespace std;

class Test{
    public:
    int age;
    static int health; // static member

    static int val(){ // static function can access only static members
        return health;
    }

    int setAge(int age){
        this->age = age;

        return age;
    }
};

class Person{
public:
    const int height = 145;
    int extraheight;
    int age;

    const int getHeight(const int height, int extraheight){
        return height+extraheight;
    }
};

int Test::health = 100;

int main(){
    cout << Test::health << endl; // no need to create object

    cout << Test::val() << endl;

    Test t;

    Test u;

    t.setAge(10);

    t.health = 50;
    u.health = 25;
    cout << t.health << endl;

    cout << Test::health << endl; // no need to create object

    cout << Test::val() << endl;

    cout << u.health << endl;

    Person p;


    p.getHeight(p.height, 25);

    return 0;

}