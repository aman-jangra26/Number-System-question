#include<iostream>
using namespace std;
int main(){
    int n;
    int b;
    cin>>n;
    cin>>b;
    int ans =0;
    int power = 1;
    while(n!=0){
        int ld=n%10;
        n=n/10;

        ans+=(ld*power);
        power *=b;
    }
    cout<<ans<<endl;
}