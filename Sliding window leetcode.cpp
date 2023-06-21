#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define test() int t;cin>>t;while(t--)
#define nn "\n"
using  namespace  std;
/*  let's started  */
int coun(string s)
{

    int ans = 0;
    for (int i = 0; i + 2 < s.length(); ++i) {
       char a = s[i];
       char b = s[i + 1];
       char c = s[i + 2];
      if (a == b || a == c || b == c)
        continue;
      ++ans;
    }

    return ans;

}
void solved()
{
    int cnt=0;
    string s;
    cin>>s;
    cout<<coun(s)<<nn;

}
int main()
{
  fast();
  solved();
  return 0;
}