#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;
    
    q.push("Ram");
    q.push("Babu");
    q.push("Jaiswal");
    
    cout<<"top element "<<q.front()<<endl;
    cout<<"size of queue is "<<q.size()<<endl;
    
    q.pop();
    
    cout<<"size of queue after pop() is "<<q.size()<<endl;
    
}