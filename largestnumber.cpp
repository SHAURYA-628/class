#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cout<<"enter the values: ";
    cin>>x>>y>>z;
   
    
    if(x>y && x>z){
        cout<<x<<" " <<"is largest";
    }
    else if(y>x && y>z){
        cout<<y <<" " <<" is largest";
    }
    else{
        cout<<z<<" "<< "is largest";
    }
    return 0;
}

