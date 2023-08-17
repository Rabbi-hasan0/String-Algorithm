/* 
      How to substring cheak-> here is explaination;
      # what we learn after end this topic:
      -> s string ta t er modde ache kina ??
      -> s string ta t er modde kotobar ache ??
      -> s string ta t er substring kina cheak kora ??
*/
#include<bits/stdc++.h>
using namespace std;
/*
input:
  4
  )(
  (()
  ()
  ))()
*/
bool cheak(string t, string s){
 for(int i=0; i+s.size()<t.size(); i++){
   cout<<i+1<<"th : "<<t.substr(i,s.size())<<'\n';
   /**  Explaination;
   # Here,
      t.substr(i,s.size()) // means
   -> t string er moddhe i(0) theke s.size()
      porjonto cheak korbe ;
   -> like:
         s= ))();
         t= ()()()();
    cheaking output: // or[ t.substr(i,s.size()) ]
                        ei line er kaj;
         1th : ()()
         2th : )()(
         3th : ()()
         4th : )()(
   **/
  if(t.substr(i,s.size())==s) return false;
 }
return true;
}

int main()
{
    int t=1;
   // cin >> t;
    while(t--)
    {
        string s;
        cin>> s;
        string s1;
        int n=s.size();
        while(n--)s1+="()";
        cout<<"Full string: "<<s1<<'\n';
        cheak(s1, s);
    }
    return 0;
}
