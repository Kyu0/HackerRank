/*
    Problem : https://www.hackerrank.com/challenges/correctness-invariant/problem
    Correctness and the Loop Invariant
    Difficulty : Easy
*/

#include <iostream>

using namespace std;

void insertionSort(int N, int arr[]){
    int i, j;
    int value;
    for(i = 1 ; i < N ; ++i){
        value = arr[i];
        j = i - 1;
        while(j >= 0 && value < arr[j]){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = value;
    }

    for(j = 0 ; j < N ; ++j){
        cout << arr[j] << " ";
    }
}

int main(){
    int arr[] = {7,4,3,5,6,2};
    insertionSort(6, arr);

    return 0;
}