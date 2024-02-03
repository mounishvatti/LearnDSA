#include<bits/stdc++.h>
using namespace std;


int maxConsecutiveAnswers(string answerKey, int k) {
    int n = answerKey.length();
    int countf = 0;
    int countt = 0;
    int maxcountt = 0;

        for(int i=0; i<n; i++){
            int j=1;
            if(answerKey[i]==answerKey[j]=='T'){
                countt++;
                j++;
            }else if(answerKey![i]==answerKey[j]){

            }
        }

        return maxcountt;
}


int main(){
    string answerkey;
    getline(cin,answerkey);
    int k;
    cin >> k;
    int maxmarks = maxConsecutiveAnswers(answerkey,k);
    cout << maxmarks;
}



#include <vector>
#include <algorithm>

class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        std::sort(nums.begin(), nums.end());

        int i = 0, j = n - 1;
        while (i < j) {
            if (nums[i] + nums[j] == k) {
                count++;
                i++;
                j--;
            } else if (nums[i] + nums[j] < k) {
                i++;
            } else {
                j--;
            }
        }

        return count;
    }
};
