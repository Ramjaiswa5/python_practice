#include<iostream>
using namespace std;

int lengthString(char name[]) {
    int length=0;
    for(int i=0; name[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main() {
    char name[20];
    cout<<"enter your name "<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;

    cout<<"length of "<<name<<" is "<<lengthString(name);

}