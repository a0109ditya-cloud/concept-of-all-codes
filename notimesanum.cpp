#include<iostream>
using namespace  std;
int main(){
    int a;
    int b;
    int c=0;
    cin >> a;
    cin >> b;
    int n=a;
    while(n>0){
        n = n/10;
        c=c+1;
    }
    n=a;
    int count = 0;
    while(n>0){
        int rem = n%10;
        n=n/10;
        if(b==rem){
            count++;
        }
    }
    if(count==0){
        cout << "0" << endl;
    }
    else{
        cout << "the number of times it appears : " << count << endl;
    }
}
