#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    //compare digit
    if(a.size() != b.size()){
        return a.size() < b.size();
    }
    else{//if digits are same,
        //compare number
        return a < b;
    }
}

vector<string> bigSorting(vector<string> unsorted) {
    sort(unsorted.begin(), unsorted.end(), compare);
        
    return unsorted;
}

int main(){
    vector<string> input = {"1","3","3","314239592","5","54","4"};

    cout << "Before Sorting" << endl;
    for(string s : input){
        cout << s << endl;
    }

    cout << "After Sorting" << endl;
    input = bigSorting(input);
    for(string s : input){
        cout << s << endl;
    }

    return 0;
}