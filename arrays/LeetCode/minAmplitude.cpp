/*

Question 1:
Given an Array A, find the minimum amplitude you can get after changing up to 3 elements. Amplitude is the range of the array (basically difference between largest and smallest element).

Example 1:

Input: [-1, 3, -1, 8, 5 4]
Output: 2
Explanation: we can change -1, -1, 8 to 3, 4 or 5

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minAmplitude(vector<int> &arr)
{
    int n = arr.size();
    int res = 0;
    sort(arr.begin(), arr.end());

    // Since we can change up to 3 elements, we consider the following scenarios:
    // •	Change the three largest elements.
    // •	Change the two largest elements and the smallest element.
    // •	Change the largest element and the two smallest elements.
    // •	Change the three smallest elements.

    int scenario_1 = arr[n - 4] - arr[0];
    int scenario_2 = arr[n - 3] - arr[1];
    int scenario_3 = arr[n - 2] - arr[2];
    int scenario_4 = arr[n - 1] - arr[3];

    return min({scenario_1, scenario_2, scenario_3, scenario_4});
}

int main()
{
    vector<int> amplitude = {-1, 3, -1, 8, 5, 4};
    int ans = minAmplitude(amplitude);
    cout << ans;
}