#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<int>v; 
    int n,input;
    cout<<"enter the size of an vector ";
    cin>>n;
    cout<<"enter the element of a vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>input;
        v.push_back(input);
    }
    cout<<"vector after sort is "<<endl;
    sort(v.begin(),v.end());
    for (int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
     
    return 0;
}
