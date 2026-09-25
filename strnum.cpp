#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int orgnum=num;
    int str=false;
    int totals=0;
    while(num>0){
        int digit = num%10;
        int total =1;
        
        for(int i=1;i<=digit;i++){
            total = total*i;
            
        }totals+=total;
        if(orgnum==totals){
            str=true;
        }
        num=num/10;
    }
    if(!str){
        cout << "not an strong number" << endl;
    }else{
        cout << "an strong number" << endl;
    }
}
