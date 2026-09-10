#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int count = 0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            count = count + i;
        }
    }
    if(count==num){
        cout << "perfect number" << endl;
    }
    else{
        cout << "not a perfect number" << endl;
    }
}
