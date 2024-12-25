#include<iostream>
#include<string>
using namespace std;
int main(){
    // string favorite_tea="lemon tea";
    // string description="Known as the \"best\" tea";

    // cout<<favorite_tea<<endl;
    // cout<<description;

    string userTea;
    int TeaQuantity;

    cout<<"What would you like to order in tea \n ";
    getline(cin,userTea);
    

    //ask for quantity
    cout<<"how many cups of "<<userTea<<" would you like to have?\n";
    cin>>TeaQuantity;
    cout<<"you have ordered "<<TeaQuantity<<" cups of "<<userTea<<endl;
    return 0; 

}