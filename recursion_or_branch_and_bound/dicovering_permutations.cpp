#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=1;i<=t;i++){
        int n, k;
        cin>>n>>k;
        string x, initial;
        x= all.substr(0, n);
        initial = x;
        cout<<"Case "<<i<<":"<<'\n';
        for(int j=1;j<=k;j++){
            cout<<x<<'\n';
            next_permutation(x.begin(), x.end());
            if(x == initial) break;
        }
    }
}
