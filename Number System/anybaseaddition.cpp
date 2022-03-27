/*1. You are given a base b.
2. You are given two numbers n1 and n2 of base b.
3. You are required to subtract n1 from n2 and print the value.
*/
#include<iostream>
using namespace std;
int main(){
    int n1,n2,b;
    cin>>n1;
    cin>>n2;
    cin>>b;
    int ans = 0;
    int carry=0;
    int power=1;
    while(n1!=0 || n2!=0 || carry !=0){
        int ld1 = n1%10;
        n1=n1/10;
        int ld2 = n2%10;
        n2=n2/10;
        int sum=ld1+ld2+carry;
        int q = sum/b;
        int r = sum%b;
        ans+=(r*power);
        power=power*10;
        carry=q;
    }
    cout<<ans<<endl;

}