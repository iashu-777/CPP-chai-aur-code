#include<bits/stdc++.h>

using namespace std;
int main(){
    //lambda
    auto preparedChai=[](int cups){
        cout<<"Preparing "<<cups<<" cups of tea"<<endl;
    };
    //square bracket tells that it is a lambda function
preparedChai(4);
    return 1;
}