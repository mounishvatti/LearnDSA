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
char upper(char ch){
    return 'A' + (ch - 'a');
}

int main(){
    while(true){
        string str;
        cin>>str;
        if(str.size()==0){
            break;
        }
        for(int i=0; i<str.size(); i++){
            str[i]=upper(str[i]);
        }
        cout << str << endl;
    }
}

// or 

/*

for(int i=0; i<str.size(); i++){
    str[i]=toupper(str[i]);
}

 - toupper is an inbuilt function to convert the lower case to upper case 
 - tolower is an inbuilt function to convert the upper case to lower case
 
*/