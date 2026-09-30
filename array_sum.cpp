#include<iostream>
using namespace std;
int main(){
    int row1;
    int row2;
    int coln1;
    int coln2;
    cin >> row1;
    cin >> coln1;
    cin >> coln2;
    cin >> row2;
    int ord_1=row1*coln1;
    int ord_2=row2*coln2;
    int arr_1[row1][coln1];
    int arr_2[row2][coln2];
    int arr_3[row1][coln1];
    cout << "enter the elements of arr_1 : ";
    for(int i=0;i<row1;i++){
        for(int j=0;j<coln1;j++){
            cin >> arr_1[i][j];
        }
    }
    cout << "enter the elements of the arr_2 : ";
    for(int i=0;i<row2;i++){
        for(int j=0;j<coln2;j++){
            cin >> arr_2[i][j];
        }
    }
    cout << "the array would be : "<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<coln1;j++){
            cout << arr_1[i][j] << " ";
        }cout << endl;
    }
    cout << "the array would be : "<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<coln2;j++){
            cout << arr_2[i][j] << " ";
        }cout << endl;
    }
    if(row1!=row2||coln1!=coln2){
        cout << "the order of both matrix is not same" << endl;
        // break;
    }else{
        cout << "the added matrix would be : " << endl;
        for(int i=0;i<row1;i++){
            for(int j=0;j<coln1;j++){
                arr_3[i][j]=arr_1[i][j]+arr_2[i][j];
                cout << arr_3[i][j] << " ";
            }cout << endl;
        }
    }
}
