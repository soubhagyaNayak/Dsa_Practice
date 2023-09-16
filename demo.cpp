#include<iostream>
using namespace std;

int main(){
    int a,b,ans=0;
    cin>>a;
    while(a!=0){ 
        b=a%10;
        ans=ans*10+b;
        a=a/10;
    }
    cout<<ans;
    return 0;
}