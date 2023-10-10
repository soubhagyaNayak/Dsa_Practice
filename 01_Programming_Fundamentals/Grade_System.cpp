#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n>90)
    {
        cout<<"Student placed with A grade";
    }
    else if(n>80){
       cout<<"Student Placed with B+ grade";
    }
    else if(n>70)
    {
        cout<<"Student Placed with B grade";
    }
    else if(n>60)
    {
        cout<<"Student Placed with C grade";
    }
    else if(n>50)
    {
        cout<<"Student Placed with C grade";
    }
    else if(n<50)
    {
        cout<<"Student failed";
    }
}