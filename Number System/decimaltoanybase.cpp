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
        int r = n%b;
        n=n/b;

        ans+=(r*power);
        power *=10;
    }
    cout<<ans<<endl;
}