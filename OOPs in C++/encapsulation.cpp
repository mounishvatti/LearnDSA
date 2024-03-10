#include <bits/stdc++.h>
using namespace std;

class Car{
    private: // if all the data members are in private then it is called fully encapsulated 
    string colour;
    string brand;
    int yom;
public:
    void setColour(string colour){
        this->colour = colour;
    }
};

int main(){
    Car c1;

    return 0;
}