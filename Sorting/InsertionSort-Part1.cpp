/*
    Problem : https://www.hackerrank.com/challenges/insertionsort1/problem
    Insertion Sort - Part 1
    Difficulty : Easy
*/

#include <iostream>
#include <vector>

using namespace std;

void insertionSort1(int n, vector<int> arr){
    int temp = arr[n - 1];
    int i;

    for(i = n - 2 ; i >= 0 ; --i){
        if(temp < arr[i]){
            arr[i + 1] = arr[i];
            //print array
            for(int n : arr){
                cout << n << " ";
            }
            cout << endl;
        }
        else{
            break;
        }
    }

    arr[i + 1] = temp;

    //print array
    for(int n : arr){
        cout << n << " ";
    }
    cout << endl;
}

int main(){
    insertionSort1(10, {2,3,4,5,6,7,8,9,10,1});
    return 0;
}