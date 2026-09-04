#include<iostream>
using namespace std;
int main(){
  int num;
  cin >> num;
  while(num!=0){
    int bits = num & 1;
    num = num >> 1;
    cout << num;
  }
}
