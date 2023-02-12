#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string str;
    int count = 0, i; 
    cout << "Enter a string : ";
    getline(cin,str);
    cout<<"your string is "<<endl;
    cout<<str<<endl; 
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    cout << "Number of words in the string are: " << count + 1;
    return 0;
}