#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<string> s;
    
    s.push("Ram");
    s.push("Babu");
    s.push("Jaiswal");
    
    cout<<"top element "<<s.top()<<endl;
    cout<<"size of stack is "<<s.size()<<endl;
    
    s.pop();
    s.pop();
    
    cout<<"size of stack after pop() is "<<s.size()<<endl;
    
}