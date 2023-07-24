#include<iostream>
using namespace std;

void pass_by_value(int n){
    n++;
}
void pass_by_reference(int& n){
    n++;
}

int main(){

    int value = 5;

    cout<<"before"<<endl<<value<<endl;
    pass_by_value(value);
    cout<<"after"<<endl<<value<<endl;

    cout<<"before"<<endl<<value<<endl;
    pass_by_reference(value);
    cout<<"after"<<endl<<value<<endl;

}
