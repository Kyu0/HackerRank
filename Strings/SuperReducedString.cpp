/*
    Problem : https://www.hackerrank.com/challenges/reduced-string/problem
    Super Reduced String
    Difficulty : Easy
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string superReducedString(string s){
    string result = "";

    for(char c : s){
        if(result.size() != 0){
            char top = result.back();
            
            if(top != c){
                result = result + c;
            }
            else{
                result.pop_back();
            }
        }
        else{
            result = result + c;
        }
    }

    return (result.size()) ? result : "Empty String";
}

int main(){
    cout << superReducedString("aaaaaabccbbb");

    return 0;
}