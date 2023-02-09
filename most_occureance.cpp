#include<iostream>
using namespace std;
int main(){
    int len,count=0,ans=0,mostOccur;
    cout<<"enter the length of an array"<<endl;
    cin>>len;
    int array[100];
    cout<<"enter all the element of an array"<<endl;

    for(int i=0; i<len; i++){
        cin>>array[i];
    }

    for(int i=0; i<len; i++){
        for(int j=0;j<len;j++){
            if(array[j]==array[i]){
                count++;
            }
        }
        if(count>ans){
            mostOccur=array[i];
            ans=count;
        }
        count=0;
        
    }
    cout<<"most occurence is "<<mostOccur<<endl;
    cout<<"number of occurrence "<<ans;    

}