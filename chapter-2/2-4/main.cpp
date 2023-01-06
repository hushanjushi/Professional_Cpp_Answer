#include <iostream>
#include <string>
#include <vector>
#include <format>

using namespace std;

int main(){
    double n;
    vector<double> nums;
    while(cin>>n,n!=0){
        nums.push_back(n);
    }
    for(auto i:nums){
        cout<<format("|{:12e}|{:22f}|",i,i)<<endl;
    }
    return 0;
}