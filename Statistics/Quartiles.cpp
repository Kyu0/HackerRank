/*
    Day 1
    Problem : https://www.hackerrank.com/challenges/s10-quartiles/problem
    Quartiles
    Difficulty : Easy
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

double getQuartile(vector<int> arr){
    double result;
    int len = arr.size();

    if(len % 2){    //if size is odd
        result = arr[len / 2];
    }
    else{   //if size is even
        result = (arr[len / 2 - 1] + arr[len / 2]) / 2;
    }

    return result;
}

int main() {
    int n;
    vector<int> arr;

    cin >> n;

    //arr
    for(int i = 0 ; i < n ; ++i){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    //sorting
    sort(arr.begin(), arr.end());
    cout << "sorted : ";
    for(int n : arr){
        cout << n << " ";
    }
    cout << endl;
    
    //get left array, right array
    vector<int>::iterator left_end = arr.begin() + (arr.size() / 2);
    vector<int>::iterator right_start = left_end + 1;

    if(arr.size() % 2 == 0){
        right_start -= 1;
    }

    vector<int> left_arr(arr.begin(), left_end);
    vector<int> right_arr(right_start, arr.end());

    for(int n : left_arr){
        cout << n << " ";
    }
    cout << endl;

    for(int n : right_arr){
        cout << n << " ";
    }
    cout << endl;

    //get Q1, Q2, Q3
    double quartile[3];
    quartile[0] = getQuartile(left_arr);
    quartile[1] = getQuartile(arr);
    quartile[2] = getQuartile(right_arr);

    //print
    for(int i = 0 ; i < 3 ; ++i){
        cout << quartile[i] << endl;
    }
    return 0;
}