#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int s1, s2, s3;
    cin>>s1>>s2>>s3;
    if(s1>s2 && s1>s3){
        cout<<"Score 1 is highest"<< s1<<endl;
    }
    else if(s2>s3 && s2>s3){
        cout<<"Score 2 is highest" <<s2<<endl;
    }
    else{
        cout<<"Score 3 is highest" <<s3<<endl;
    }
    return 0;
}