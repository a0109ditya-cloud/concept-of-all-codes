#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int orgnum = num;
    int reverse=0;
    while(num>0){
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if(orgnum=reverse){
        cout << "pallindrome number" << endl;
    }
    else{
        cout << "not a pallindrome number" << endl;
    }
}
