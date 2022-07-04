#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,j;
    vector<int> re;
    vector<int> even;
    vector<int> odd;
    //taking n 
    cin>>n;
    for(int i=0; i<n;i++){
        cin>>j;
         if(j%2==0){
             even.push_back(j);
         }else{
             odd.push_back(j);
         }
    }
    sort(even.begin() , even.end());
    sort(odd.begin() , odd.end());
    for(int j=0;j<even.size();j++){
        cout<<even[j]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
    return 0 ;
}