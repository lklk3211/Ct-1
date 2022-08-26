//Name: Lokendra Kheta
//Roll_No: 2010990424
//Set_No: 3
//Question_No: 2

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number of Elements in array : ";
    cin>>n;

    //taking the inputs
    cout<<"Enter the Array Elements: "<<endl;
    vector<int> arr(n);
    for(auto &i: arr) cin>>i;

    int target;
    cout<<"Enter the value of Target: ";
    cin>>target;

    unordered_set<int> s;

    vector<vector<int>> ans;


    for(auto &i: arr){

        if(s.find(target-i) != s.end()){
            ans.push_back({i, target-i});
        }
        s.insert(i);
    }

    if(ans.size() == 0){
        cout<<"Pair not found"<<endl;
    }
    else{
        for(auto &v: ans){
            cout<<"Pair Found ("<<v[0]<<","<<v[1]<<")"<<endl;
        }
    }
}
