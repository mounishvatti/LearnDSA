#include<bits/stdc++.h>
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