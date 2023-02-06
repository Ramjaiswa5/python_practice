#include<iostream>
using namespace std;
int main() {

    int row,col;
    cout<<"enter row "<<endl;
    cin>>row;
    cout<<"enter column "<<endl;
    cin>>col;
    int array[row][col];

    cout<<"enter the element of an array"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>array[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}