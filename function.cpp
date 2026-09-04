//this is an program of ncr

#include<iostream>
using namespace std;
int nup(int n){
    int i;
    int fact=1;
    for(i=1;i<=n;i++){
        fact = fact * i;
    
    }
    return fact;
}
int deno(int n, int r){
    int i;
    int fact = 1;
    for(i=1;i<=n-r;i++){
        fact = fact * i;

    }
    return fact;
}

int repo(int r){
    
    int fact = 1;
    for(int i=1;i<=r;i++){
        fact = fact * i;

    }
    return fact;
}
int main(){
    int a;
    int b;
    cout << "give us the value of n : ";
    cin >> a;
    cout << "give us the value of r : ";
    cin >> b;
    int answer1=nup(a);
    int answer2 = deno(a,b);
    int answer3 = repo(b);
    int answer4 = answer1 / (answer3 * answer2);
    cout << "This is the value of ncr : " << answer4 << endl;
    return 0;
}
