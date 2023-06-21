#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define test() int t;cin>>t;while(t--)
#define nn "\n"
using  namespace  std;
/*  let's started  */
void solved()
{
    int cnt=0;
    string s;
    cin>>s;
    string t,sln;
    cin>>t;
    for(int i=0; i<t.size(); i++)
      sln+=s[i];

    if(sln==t)cnt++;
    for(int i=t.size(); i<s.size(); i++)
    {
      sln+=s[i];
      sln.erase(sln.begin());
      if(sln==t)cnt++;
    }
    cout<<cnt<<nn;

}
int main()
{
  fast();
  solved();
  return 0;
}