#include <iostream>

using namespace std;


int main(){  
    int array[10], n, i;    

    cout<<"Enter the number to convert: ";    
    cin>>n;    

    for(i=0; n>0; i++){    
        array[i]=n%2;    
        n=n/2;  
    }    
    cout<<"Converted to binary: ";

    for(i=i-1 ;i>=0 ;i--) cout<<array[i];    
    
}  