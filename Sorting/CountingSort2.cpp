/*
    Problem : https://www.hackerrank.com/challenges/countingsort2/problem
    Counting Sort 2
    Difficulty : Easy
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> countingSort(vector<int> arr){
    vector<int> numbers(100);
    vector<int> result;

    //Count numbers
    for(int n : arr){
        ++numbers[n];
    }

    //push element, for numbers[i] times.
    for(int n = 0 ; n < 100 ; ++n){
        for(int j = 0 ; j < numbers[n] ; ++j){
            result.push_back(n);
        }
    }

    return result;
}

int main(){
    vector<int> result;

    result = countingSort({1,2,3,5,10,29,1,2,3,5,3,2,3,4,13,4,5,5,0,0,0});

    for(int n : result){
        cout << n << " ";
    }

    return 0;
}