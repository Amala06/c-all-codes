#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    if(s[6]=='P')
    {
        if (n==12) {
       cout<<n;
        }
        else {
        cout<<n+12;
        }
    }
    else if (s[6]=='A') {
  if (n==12) {
 cout<<0;
 cout<<0;
  }
  else {
  cout<<n;
  }
    }
    s.erase(6);
    cout<<s;

    return 0;
}