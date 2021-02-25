/*
    Problem : https://www.hackerrank.com/challenges/countingsort4/problem
    The Full Counting Sort
    Difficulty : Medium
    Time complexity : O(N)
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void countSort(vector<vector<string>> arr){
    //replace string in the first half with dash
    for(int i = 0 ; i < (arr.size() / 2) ; ++i){
        arr[i][1] = '-';
    }

    vector<vector<int>> index(100);

    //save index inorder
    for(int i = 0 ; i < arr.size() ; ++i){
        int number = stoi(arr[i][0]);
        
        index[number].push_back(i);
    }

    //print
    for(vector<int> numbers : index){
        for(int number : numbers){
            cout << arr[number][1] << " ";
        }
    }
}

int main(){
    countSort({{"1", "e"},
{"2", "a"},
{"1", "b"},
{"3", "a"},
{"4", "f"},
{"1", "f"},
{"2", "a"},
{"1", "e"},
{"1", "b"},
{"1", "c"}});

    return 0;
}