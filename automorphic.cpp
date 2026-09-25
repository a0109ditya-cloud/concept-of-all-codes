#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int sq=num*num;
    bool swape = true;
    while(num>0){
        int digit = num%10;
        int dig = sq%10;
        if(dig!=digit){
            swape = false;
            break;
        }
        num=num/10;
        sq=sq/10;
    }
    if(!swape){
        cout << "not an automorphic number" << endl;
    }else{
        cout << "an automorphic number" << endl;
    }
}
