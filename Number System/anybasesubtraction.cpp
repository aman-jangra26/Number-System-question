/*1. You are given a base b.
2. You are given two numbers n1 and n2 of base b.
3. You are required to subtract n2 from n1 and print the value.*/
#include<iostream>
using namespace std;
int main(){
    int n1,n2,b;
    //n1>n2 always
    cin>>n1;
    cin>>n2;
    cin>>b;
    int ans = 0;
    int power = 1;
    int borrow=0;
    while(n1!=0){
        int ld1=n1%10;
        int ld2=n2%10;
        n1=n1/10;
        n2=n2/10;
        int diff = (ld1-borrow)-ld2;
        if(diff>=0){
            borrow=0;
        }else{
            diff+=b;
            borrow=1;
        }
        ans+=(diff*power);
        power*=10;

    }
    cout<<ans<<endl;
}