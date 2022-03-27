/*1. You are given a base b.
2. You are given two numbers n1 and n2 of base b.
3. You are required to multiply n1 and n2 and print the value.
*/
#include<iostream>
using namespace std;
int getsum(int n1,int n2,int b ){
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
    return ans;

}
int gpwsd(int n1 ,int d1,int b){
    int ans=0;
    int power =1;
    int carry = 0;
    while (n1!=0 || carry !=0)
    {
        int ld1=n1%10;
        n1/=10;
        int product = (ld1*d1)+carry;
        int q = product/b;
        int r= product%b;
        ans+=(r*power);
        carry = q;
        power*=10;
    }
    return ans;
}
int getproduct(int n1,int n2,int b){
    int ans = 0;
    int power = 1;
    while (n2!=0)
    {
        int d1= n2%10;
        n2/=10;
        int pwsd= gpwsd(n1,d1,b);
        ans = getsum(ans,pwsd*power,b);
        power*=10;
    }
    return ans;

}
int main(){
    int n1,n2,b;
    cin>>n1;
    cin>>n2;
    cin>>b;
    int ans = getproduct(n1,n2,b);
    cout<< ans<<endl;
}
