#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;


    // int i = 1;
    // while (i<=n){
    //     cout<<i<<" ";
    //     i = i+1;
    // }

    // int n;
    // cin>>n;
    // int i = 1;
    // int sum=0;
    // while (i<=n)
    // {
    //    sum = sum + i;
    //    i = i+1;
    // //    cout<<sum<<"this is sum"<<endl;
    // //    cout<<i<<"this is i"<<endl;
    // }
    
    // cout<<"value of sum is " <<sum<<endl;

    int n;
    cin>>n;

    int i = 2;

    while (i<n)
    {
        if (n%i==0)
        {
            cout<<" not prime for "<< i<< endl;
        }
        else
        {
            cout<<"Prime number for "<< i<<endl;
        }
        i = i + 1;
    }
    




}