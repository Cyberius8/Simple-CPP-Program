#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int a=x;
    string b=to_string(a);
    int size=b.length();
    string c;
    for(int i=size-1;i>=0;i--){
        c+=b[i];
    }
    cout<<c<<endl<<b<<endl;
    if(c==b){
        return true;
    }else{
        return false;
    }
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}