#include<iostream>
using namespace std;
int main(){
    int num1;
    int gcd;
    int lcm;
    cin >> num1;
    int num2;
    cin >> num2;
    for(int i=1;i<=num1&&i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
            lcm=(num1*num2)/gcd;
        }
    }
    cout << gcd << endl;

    cout << lcm << endl;
}
