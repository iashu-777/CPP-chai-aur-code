#include<bits/stdc++.h>
using namespace std;

void serveChai(string s="Masala Chai"){
    cout<<"chai lelo chai garma garam "<<s<<endl;
}
void serveChai(int s){
    cout<<s<<" rupee hue sir apki chai ke"<<endl;
}
// void serverChai(int s,int cups){
//     cout<<s<<" rupee hue sir apki chai ke, "<<cups<<" cups chai order kari thi";
// }
int main(){
    serveChai();
    serveChai(10);
    // serveChai(10,5); 
    return 0;
}