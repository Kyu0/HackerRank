/*
    Problem : https://www.hackerrank.com/challenges/find-the-median/problem
    Find the Median
    Difficulty : Easy

    Time Complexity : O(NlogN) ..sort O(1) ..find median
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMedian(vector<int> arr){
    sort(arr.begin(), arr.end());

    return arr[arr.size() / 2];
}

int main(){
    cout << findMedian({0,1,2,4,6,5,3});

    return 0;
}