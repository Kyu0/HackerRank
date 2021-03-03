/*
    Day 1
    Problem : https://www.hackerrank.com/challenges/s10-interquartile-range/problem
    Interquartile Range
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
        result = ((double)arr[len / 2 - 1] + (double)arr[len / 2]) / 2;
    }

    return result;
}

int main(){
    int n;

    cin >> n;

    vector<int> arr;
    vector<int> elements;
    vector<int> frequencies;

    //input elements
    for(int i = 0 ; i < n ; ++i){
        int temp;
        cin >> temp;
        elements.push_back(temp);
    }

    //input frequencies
    for(int i = 0 ; i < n ; ++i){
        int temp;
        cin >> temp;
        frequencies.push_back(temp);
    }

    //input array
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < frequencies[i] ; ++j){
            arr.push_back(elements[i]);
        }
    }

    //sorting
    sort(arr.begin(), arr.end());

    //get left array, right array
    vector<int>::iterator left_end = arr.begin() + (arr.size() / 2);
    vector<int>::iterator right_start = left_end + 1;

    if(arr.size() % 2 == 0){
        right_start -= 1;
    }

    vector<int> left_arr(arr.begin(), left_end);
    vector<int> right_arr(right_start, arr.end());

    //get Q1, Q3
    double quartile[2];
    quartile[0] = getQuartile(left_arr);
    quartile[1] = getQuartile(right_arr);

    printf("%0.1f", quartile[1] - quartile[0]);

    return 0;
}