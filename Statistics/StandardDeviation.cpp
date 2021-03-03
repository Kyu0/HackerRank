/*
    Day 1
    Problem : https://www.hackerrank.com/challenges/s10-standard-deviation/problem
    Standard Deviation
    Difficulty : Easy
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    vector<int> arr;
    double std_dev, sum = 0, mean = 0;

    cin >> n;

    //input arr
    for(int i = 0 ; i < n ; ++i){
        int temp;
        cin >> temp;
        arr.push_back(temp);

        sum += temp;
    }
    //get mean
    mean = sum / n;
    sum = 0;
    cout << mean << endl;
    //get squared distance from the mean, each element
    for(int i = 0 ; i < n ; ++i){
        sum += (arr[i] - mean) * (arr[i] - mean);
    }

    //get standard deviation
    std_dev = sqrt(sum / n);

    //print
    cout << std_dev;

    return 0;
}
