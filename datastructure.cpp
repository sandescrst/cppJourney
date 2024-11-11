#include <iostream>
#include <list>

using namespace std;

int rbegin_prac(list<int> li, int length){
    for (auto it = li.rbegin(); it !=li.rend(); it++){ // in here auto does assign the iterator type to the variable
                                                        // and condition would be as long as rbegin is not equal to rend run the loop
        cout << *it <<endl;
    }
}
int main (){
    rbegin_prac({1,3,4,6,88}, 5);

}
