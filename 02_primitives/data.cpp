#include<iostream>

using namespace std;
int main(){
    int teaLeaves=50;
    float waterTemperature=85.5;
    double priceOfTea=299.99999999999;
    // char teaGrade='A';
    // bool isTeaReady=""; empty string gives 1
    // bool isTeaReady=''; not allowed

    char teaGrade='ABC'; //overflow , only stores last character

    cout<<priceOfTea<<endl;
    return 0;
}