#include<iostream>
using namespace std;
int main(){
    int n ,b1,b2;
    cin>>n;
    cin>>b1;
    cin>>b2;
    int decimal=0;
    int pow =1 ;
    while(n!=0){
        int ld = n%10;
        n=n/10;
        decimal+=(ld*pow);
        pow*=b1;
    }
    int ans = 0;
    int power =1;
    while(decimal!=0)
    {
        int r = decimal%b2;
        decimal=decimal/b2;
        ans+=(r*power);
        power*=10;

    }
    cout<<ans<<endl;
}