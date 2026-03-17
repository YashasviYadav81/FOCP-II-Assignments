#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    cin>>x;
    cin>>y;
    cin>>z;
    //or we can write as
    // cin>> x >> y >> z;
    int sum= x+y+z;
    float avg= sum/3;
    cout<<avg<< endl;
return 0;
}