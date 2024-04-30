#include<iostream>
#include<stdio.h>
using namespace std;
   //code for finding the given number is prime or not using function
bool is_prime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}
int main(){
    int n;
    cin>>n;
    if(is_prime(n)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }

    
    return 0;
}