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