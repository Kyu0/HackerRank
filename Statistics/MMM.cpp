/*
    Day 0
    Problem : https://www.hackerrank.com/challenges/s10-basic-statistics/problem
    Mean, Median, and Mode
    Difficulty : Easy
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> arr;
    map<int, int> count;
    double mean, median;
    int n, mode = 0;

    cin >> n;

    int temp;

    //read integers
    for(int i = 0 ; i < n ; ++i){
        cin >> temp;
        arr.push_back(temp);
        ++count[temp];

        //get mode
        if(count[temp] > count[mode]){
            mode = temp;
        }
        else if(count[temp] == count[mode] && temp < mode){
            mode = temp;
        }

        //get sum of arr
        mean += temp;
    }
    mean /= arr.size();

    //get median
    sort(arr.begin(), arr.end());
    if(arr.size() % 2){ //if arr.size is odd
        median = arr[arr.size() / 2];
    }
    else{
        median = arr[arr.size() / 2 - 1] + arr[arr.size() / 2];
        median /= 2;
    }

    cout << mean << endl << median << endl << mode;

    return 0;
}
