/*
    Problem : https://www.hackerrank.com/challenges/countingsort1/problem
    Counting Sort 1
    Difficulty : Easy
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> countingSort(vector<int> arr){
    vector<int> result(100);

    //Count numbers
    for(int n : arr){
        ++result[n];
    }

    return result;
}


int main(){
    vector<int> result;

    result = countingSort({1,2,3,5,6,1,2,23,5,1,3,2,3,1});

    for(int n : result){
        cout << n << " ";
    }

    return 0;
}