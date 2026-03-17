#include<iostream>
using namespace std;
int main(){
int marks[5];
for(int i=0; i<5; i++){
    cin>>marks[i];
}

int total=marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
cout<<total<<endl;
float percentage=(total/500.0)*100;
cout<< percentage<<endl;
return 0;
}