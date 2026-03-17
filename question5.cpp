#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int a;
    int b;
    int temp;
    cin>> a;
    cin>> b;
    
    temp=a;
   a=b;
   b=temp;
   cout<<a<< endl;
   cout<<b;
return 0;
}