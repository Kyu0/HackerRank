/*
    Problem : https://www.hackerrank.com/challenges/quicksort1/problem
    Quicksort 1 - Partition
    Difficulty : Easy
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> arr){
    int pivot = arr[0];
    int i = 1, j = arr.size() - 1;

    while(i < j){
        while(arr[i] < pivot) ++i;

        while(arr[j] > pivot) --j;

        if(i < j){
            swap(arr[i], arr[j]);
        }
        else{
            swap(arr[0], arr[j]);
        }
    }

    return arr;
}

int main(){
    quickSort({4,5,3,7,2});
    return 0;
}