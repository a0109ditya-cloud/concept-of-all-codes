#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cin >> num;
    int answer =0;
    int i=0;
    while(num!=0){
        int bits = num & 1;
        answer = bits * pow(10,i) + answer;
        num = num >> 1;
        i++;
    }
    cout << answer;
}
