#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int start=0;
    int end=n-1;

    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}


int lengthString(char name[]) {
    int length=0;
    for(int i=0; name[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main() {
    char name[20];
    int len;
    cout<<"enter your name "<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    len=lengthString(name);
    cout<<"length of "<<name<<" is "<<len<<endl;   
    reverse(name,len);
    cout<<"reverse is "<<name<<endl;

}