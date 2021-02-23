/*
    Problem : https://www.hackerrank.com/challenges/runningtime/problem
    Running Time of Algorithms
    Difficulty : Easy
*/
#include <iostream>
#include <vector>

using namespace std;

int runningTime(vector<int> arr){
    int i, j;
    int value;
    int result = 0; //number of shifts
    for(i = 1 ; i < arr.size() ; ++i){
        value = arr[i];
        j = i - 1;
        while(j >= 0 && value < arr[j]){
            arr[j + 1] = arr[j];
            --j;
            ++result;
        }
        arr[j + 1] = value;
    }

    return result;
}

int main(){
    cout << runningTime({2,1,3,1,2});
    
    return 0;
}