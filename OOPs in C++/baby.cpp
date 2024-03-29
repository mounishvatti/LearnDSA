#include<iostream>
using namespace std;

class Baby{
private:
	const string Name = "Madhusruti"; // const cuz she can never be replaced.
	const int Love = 100; // my love for her will always be 100%.
	bool isAngry; // she is sometimes tho.
	bool isHungry; // she is always hungry
	bool isHot; // she's hot asf.
	bool isCute; // she's very cute.

public:
	Baby(bool isAngry, bool isHungry, bool isHot, bool isCute) : isAngry(isAngry), isHungry(isHungry), isHot(isHot), isCute(isCute) {}

    ~Baby(){
        cout<<"Baby can never leave you, sorry!";
    }
};

int main(){
    Baby Madhu(true, true, true, true);
}
// Baby can never be destroyed sorry!