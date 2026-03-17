#include<iostream>
#include <conio.h>
using namespace std;
int main(){
    int item_no;
    int quantity;
    int unit_price;
    cin>> item_no;
    cin>> quantity;
    cin>> unit_price;
    float amount= quantity*unit_price*20.0/100.0; // make sure to add even a single float value with decimal to get answer in float
    cout<< amount;
    return 0;


}

