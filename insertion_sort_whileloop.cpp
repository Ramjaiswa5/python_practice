#include<iostream>
using namespace std;
int sort(int arr[], int n){
    for(int i = 1;i<n;i++){
        int temp=arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    int array[n];
    cout<<"enter the element of an array"<<endl;
    
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    sort(array,5);
    cout<<"array after sorting "<<endl;
    printArray(array,5);
}