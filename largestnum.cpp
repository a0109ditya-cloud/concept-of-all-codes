#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int large = 0;
    while(n>0){
        int dig = n%10;
        
        if(dig>large){
            large=dig;
        
        }
        n=n/10;
    
    }
    cout << "alrgest number would be ; " << large << endl;
}
