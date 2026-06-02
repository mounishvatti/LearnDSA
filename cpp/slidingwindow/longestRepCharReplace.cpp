// Longest repeating character replacement

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// brute force 
int function_brute(string str, int k){
    int n = str.length();
    int maxlen = 0;
    for(int i = 0; i < n; i++){

        vector<int> hash(26, 0);
        int maxfreq = 0, changes = 0;

        for(int j = i; j < n; j++){

            hash[str[j] - 'A']++;
            maxfreq = max(maxfreq, hash[str[j] - 'A']);
            int len = j - i + 1;
            changes = len - maxfreq;

            if(changes <= k){
                maxlen= max(maxlen, len);
            }

            else break;
        }
    }
    return maxlen;
}

// optimal approach - 1
int function_opt1(string str, int k){
    int left = 0;
    int right = 0;
    int maxlen = 0;
    int maxfreq = 0;

    int n = str.length();
    vector<int> hash(26, 0);

    while(right < n){
        hash[str[right] - 'A']++;
        maxfreq = max(maxfreq, hash[str[right] - 'A']);
        while((right - left + 1) - maxfreq > k){
            hash[str[left] - 'A']--;
            maxfreq = 0;
            for(int i = 0; i < 26; i++){
                maxfreq = max(maxfreq, hash[i]);
            }
            left++;
        }
        if((right - left + 1) - maxfreq <= k){
            maxlen = max(maxlen, (right - left + 1));
        }
        right++;
    }
    return maxlen;
}

// optimal approach - 2
int function_opt2(string str, int k){
    int left = 0;
    int right = 0;
    int maxlen = 0;
    int maxfreq = 0;

    int n = str.length();
    vector<int> hash(26, 0);

    while(right < n){
        hash[str[right] - 'A']++;
        maxfreq = max(maxfreq, hash[str[right] - 'A']);
        if((right - left + 1) - maxfreq > k){
            hash[str[left] - 'A']--;
            left++;
        }
        if((right - left + 1) - maxfreq <= k){
            maxlen = max(maxlen, (right - left + 1));
        }
        right++;
    }
    return maxlen;
}

int main(){
    string str = "AABABBA";
    //cin >> str;
    int k = 2;
    //cin >> k;
    cout << function_brute(str, k) << endl;
    cout << function_opt1(str, k) << endl;
    cout << function_opt2(str, k) << endl;
    return 0;
}