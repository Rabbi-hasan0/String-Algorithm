#include <bits/stdc++.h>
using namespace std;

int n, a[25];
bool is_taken[25];
void rec(int pos){
    if(pos > n){
    for(int i=1; i<=n; i++){
    if(is_taken[i]){
    cout<<a[i]<<' ';
    }
    }
    cout<<'\n';
    return;
    }
    is_taken[pos]= false;
    rec(pos + 1);
    is_taken[pos]= true;
    rec(pos + 1);
}

int32_t main()
{
   cin>> n;
   for(int i=1; i<=n; i++){
    cin>> a[i];
    }
   rec(1);
    return 0;
}


