#include <iostream>
#include <vector>

using namespace std;


// //Binary Search
// int introTutorial(int V, vector<int> arr){
//     int start = 0, end = arr.size() - 1;
//     int result = -1;

//     //loop until element's size != 1
//     while(start - end < 0){
//         cout << "start, end : " << start << ", " << end << endl;
//         //if find V, return index
//         if(arr[(start + end) / 2] == V){
//             return (start + end) / 2;
//         }
//         //if not find V, adjust range
//         else{
//             if(arr[(start + end) / 2] < V){
//                 start = (start + end) / 2 + 1;                
//             }
//             else{
//                 end = (start + end) / 2 - 1;
//             }
//         }
//     }

//     return start;
// }


// Linear Search
int introTutorial(int V, vector<int> arr) {
    int result = -1;
    for(int i = 0 ; i < arr.size() ; ++i){
        if(arr[i] == V){
            result = i;
        }
    }
    
    return result;
}

int main(){
    int V = 4;
    vector<int> arr = {1, 4, 5, 7, 9, 12};

    cout << "V's position is ";

    cout << introTutorial(V, arr) << endl;

    return 0;
}