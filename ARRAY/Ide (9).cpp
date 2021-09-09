#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
 
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
	    ll n;
        cin >> n ;
        string s;
        cin >> s ;
        char A[n][n];
        memset(A,'0',sizeof(A));
        vector<ll> v;
        ll Count= 0;
        for(int i=0;i<n;i++) 
        {
            if(s[i]=='2')
            {
                v.push_back(i);
            }
        }
        if(v.size()<=2 && v.size()) {
            cout << "NO"<<endl;
        }
        else
        {
            cout << "YES"<<endl;
            for(int i=0;i<s.size();i++) {
                if(s[i]=='1') 
                {
                    for(int j=0;j<n;j++) 
                    {
                        A[i][j]='=';
                        A[j][i]='=';
                    }
                }
            }
            for(int i=0;i<v.size();i++) 
            {
                for(int j=0;j<v.size();j++) {
                    if(i==j){continue;}
                    if(A[v[i]][v[j]]=='0') 
                    {
                        A[v[i]][v[j]] ='=';
                        A[v[i]][v[j]] = '=';
                    }
                }
                if(i==v.size()-1)
                {
                    A[v[i]][v[0]]='+';
                    A[v[0]][v[i]]='-';
                }
                else
                {
                    A[v[i]][v[i+1]]='+';
                    A[v[i+1]][v[i]]='-';
                }
            }
            for(int i=0;i<n;i++)
            {
                A[i][i]='X';
                for(int j=0;j<n;j++) {
                    cout <<A[i][j];
                }
                cout <<endl;
            }
        }
    }
}
