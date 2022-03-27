#include<iostream>
using namespace std;
int main(){
    int d;
    int n;
    cin>>d;
    cin>>n;
    int count=0;
    while (d!=0)
    {
        int x = d%10;
        if(x==n){
            count++;
        }
        d=d/10;
        

    }
    cout<<count<<endl;
    
}
