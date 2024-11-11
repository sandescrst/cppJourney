#include <iostream>
#include <list>

using namespace std;

int rbegin_prac(list<int> li, int length){
    for (auto it = li.rbegin(); it !=li.rend(); it++){ // in here auto does assign the iterator type to the variable
                                                        // and condition would be as long as rbegin is not equal to rend run the loop
        cout << *it <<endl; // we are printing the value "it" is pointed to which means it is a pointer which is initally assigned the adderess of each element

    }
}

// push_back: it inserts elements in the back of previous element

int push_back_prac(list<int> li){
    for(int i =99; i < 108; i++){
        li.push_back(i);
    }
    for (auto len = li.begin(); len != li.end() ; len++){
        cout << *len << endl;
    }
    return 0;
}
// push_front: it insert elements in the front of previous element
int push_front_prac(list<int> li){
    for(int i =3; i < 8; i++){
        li.push_front(i);
    }
    for (auto p = li.begin(); p != li.end() ; p++){
        cout << *p << endl;
    }
    return 0;
}
int main (){
    //rbegin_prac({1,3,4,6,88}, 5);
    cout << "push front starts..."<< endl;
    push_front_prac({});
    cout <<endl<< "push back starts..."<< endl;
    push_back_prac({});

}


