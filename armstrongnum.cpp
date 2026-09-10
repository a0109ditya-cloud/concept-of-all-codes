#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cin >> num;
    int orgnum = num;
    int total =0 ;
    int digits = 0;
    int temp = num;
    while(temp>0){
        digits++;
        temp = temp / 10;
    }
    temp = num;
    while(temp>0){
        int digit = temp % 10;
        total = total + pow(digit, digits);
        temp = twmp / 10;
    }
    if(orgnum==total){
        cout << "armstrong number" << endl;
    }
    else{
        cout << "not an armstronng number" << endl;
    }
}
