#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<pair<int,int>> v;
  
  for(int i=1;i<=5;i++)
  {
    v.push_back({i,i*i});
  }
  reverse(v.begin(),v.end()); // reversing the vector
  
  for(int i=1;i<=5;i++)
  {
    cout<<v[i].first<<" , "<<v[i].second<<"\n";
  }
  
  
  return 0;
}

