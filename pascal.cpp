#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int rows=1;
    while(rows<=num){
        int spaces=1;
        while(spaces<=num-rows){
            cout << " ";
            spaces=spaces+1;
        }
        int num=1;
        int coln=1;
        while(coln<=rows){
            cout << num << " ";
            num = num * (rows-coln)/coln;
            coln = coln + 1;

        }
        cout << endl;
        rows = rows +  1;

    }

}
