#include<iostream>
using namespace std;

void reverse(string& name,int n){
    int start=0;
    int end=n-1;

    while(start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}

int main() {
    string name,temp;
    int len;
    cout<<"enter your string "<<endl;
    getline(cin,name);
    temp = name;
    cout<<"your string is "<<name<<endl;
    len=temp.length();
    cout<<"length of "<<name<<" is "<<len<<endl;   
    reverse(temp,len);
    cout<<"reverse of "<<name<<" is "<<temp<<endl;

}