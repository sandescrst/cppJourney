#include <iostream>
#include <vector>
#include <list>

using namespace std;

string revString (string str){
    list<int> li = {1, 3 ,5 ,4};
    for (auto it = li.rbegin() ; it != li.rend() ; it++){
        cout << *it << endl;
    }
    
}

int main(){
    int * p;
    int arr[5];

    p = arr;
    *p = 23;
    p = arr + 1;
    *p = 24;
    p = arr + 2;
    *p = 35;
    p = arr +3;
    *p= 38;
    p = arr+4;
    *p = 90;

    for (int i = 0; i < 5; ++i){
        cout << arr[i]<< endl;
        
    }
}

