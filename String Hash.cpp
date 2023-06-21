#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define test() int t;cin>>t;while(t--)
#define nn "\n"
int mod= 1e9 + 7;
using  namespace  std;
/*  let's started  */
int gethash(string s)
{
  int ans=0;
  int p=3;
  int pow=1;
  for(int i=0; i<s.size(); i++)
  {
    ans+=(s[i]*pow)%mod;
    pow*=p%mod;
  }

  return ans%mod;
}

void solved()
{
    test()
    {
      string s;
      cin>>s;
      int ans=gethash(s);
      cout<<ans<<nn;
    }
}
int main()
{
    fast();
    solved();
    return 0;
}