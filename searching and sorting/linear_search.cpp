#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
    
}

int main(){
    int array[100];
    int length,key;

    cout<<"enter the length of an array ";
    cin>>length;
    cout<<"enter all the element of an array :"<<endl;
    
    for(int i = 0; i<length; i++){
        cin>>array[i];
    } 

    cout<<"enter the element to search for ";
    cin>>key;

    bool found = search(array,length,key);

    if(found){
        cout<<key<<" is presnt in an array  "<<endl;
    }
    else{
        cout<<key<<" is not present in an array  "<<endl;
    }

    cout<<"enter the element to search for ";
    cin>>key;

    bool found1 = search(array,length,key);

    if(found1){
        cout<<key<<" is presnt in an array  "<<endl;
    }
    else{
        cout<<key<<" is not present in an array  "<<endl;
    }
}