/*
    Problem : https://www.hackerrank.com/challenges/closest-numbers/problem?h_r=next-challenge&h_v=zen
    Closest Numbers
    Difficulty : Easy

    Time Complexity : O(NlogN) ..sort / O(N) ..get differ & compare
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> closestNumbers(vector<int> arr){
    vector<int> result;

    sort(arr.begin(), arr.end());

    int min = INT_MAX;
    for(int i = 0 ; i < arr.size() - 1 ; ++i){
        int diff = abs(arr[i] - arr[i + 1]);

        min = (min < diff) ? min : diff;
    }

    for(int i = 0 ; i < arr.size() - 1 ; ++i){
        int diff = abs(arr[i] - arr[i + 1]);

        if(diff == min){
            result.push_back(arr[i]);
            result.push_back(arr[i + 1]);
        }
    }
    
    return result;
}

int main(){
    vector<int> result;

    result = closestNumbers({-20, -3916237, -357920, -3620601, 7374819, -7330761, 30, 6246457, -6461594, 266854});

    for(int n : result){
        cout << n << " ";
    }

    return 0;
}