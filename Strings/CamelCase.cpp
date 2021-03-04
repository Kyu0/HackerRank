/*
    Problem : https://www.hackerrank.com/challenges/camelcase/problem
    Camel Case
    Difficulty : Easy
*/

#include <iostream>
#include <string>

using namespace std;

int camelCase(string s){
    int result = 1;

    for(char c : s){
        if(c >= 'A' && c <= 'Z'){
            result += 1;
        }
    }

    return result;
}

int main(){
    cout << camelCase("saveChangesInTheEditor");

    return 0;
}