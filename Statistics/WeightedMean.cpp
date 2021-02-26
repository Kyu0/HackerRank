/*
    Day 0
    Problem : https://www.hackerrank.com/challenges/s10-weighted-mean/problem
    Weighted Mean
    Difficulty : Easy
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr;
    vector<int> weight;
    int n, sum_weight = 0;

    cin >> n;

    int temp;
    
    //read integers to push 'arr'
    for(int i = 0 ; i < n ; ++i){
        cin >> temp;
        arr.push_back(temp);
    }

    //read integers to push 'weight'
    for(int i = 0 ; i < n ; ++i){
        cin >> temp;
        weight.push_back(temp);
        //sum
        sum_weight += temp;
    }

    int weight_arr = 0;
    for(int i = 0 ; i < n ; ++i){
        weight_arr += arr[i] * weight[i];
    }
    
    printf("%.1f", (double)weight_arr / (double)sum_weight);

    return 0;
}
