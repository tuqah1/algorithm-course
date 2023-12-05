#include<bits/stdc++.h>
using namespace std;

unsigned long long iterativeFactorial(long long n){
long long factorial=1;
for(int i=1;i<=n;i++){
    factorial*=i;
}
return factorial;
}

 unsigned long long recursionFactorial(long long n){
    if(n==0)
       return 1;
    return n*recursionFactorial(n-1);
}

int main(){

long long n;
cout<<"Enter your number n: ";
cin>>n;
  auto start =chrono::high_resolution_clock::now();
    // cout<<" Factorial result In The Irerative Function is "<<iterativeFactorial(n)<<endl;
     cout<<" Factorial result In The Recursion Function is "<<recursionFactorial(n)<<endl;
   auto stop =chrono::high_resolution_clock::now();
   auto duration =chrono::duration_cast<chrono::microseconds>(stop - start);

    cout << "Time taken by function: " << duration.count() << "microseconds" <<endl;
return 0;}























