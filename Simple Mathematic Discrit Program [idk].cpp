#include <iostream>
using namespace std;

int main(){
    for (int i = 2500; i < 3500; i++){
        if (i%5 == 3 &&i%11 == 2 &&i%13 == 11){
            cout << i << " ";
        }
    }
}
