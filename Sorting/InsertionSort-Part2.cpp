/*
    Problem : https://www.hackerrank.com/challenges/insertionsort2/problem
    Insertion Sort - Part 2
    Difficulty : Easy
*/

#include <iostream>
#include <vector>

using namespace std;

void insertionSort2(int n, vector<int> arr){
    //expand range
    for(int i = 1 ; i <= n - 1 ; ++i){
        int j = i;  
        int temp = arr[j];  //rightmost element

        //find temp's position
        for( ; j > 0 ; --j){
            if(temp < arr[j - 1]){
                arr[j] = arr[j - 1];
            }
            else{
                break;
            }
        
        }
        //Insertion
        arr[j] = temp;

        //print array
        for(int n : arr){
            cout << n << " ";
        }
        cout << endl;
    }
}

int main(){
    insertionSort2(8, {8,7,6,5,4,3,2,1});

    return 0;
}