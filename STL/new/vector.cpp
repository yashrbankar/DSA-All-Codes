#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector <pair<int,string>> vop={{21,"shraddha"},{43,"yash"}};
  pair<int ,string>t;
  t={77,"ronit"};
  vop.push_back(t);
  
  for(int i=0;i<vop.size();i++)
  {
      cout<<vop[i].first<<" "<<vop[i].second<<endl;
  }
  
  cout<<"roll no of "<<vop[0].second<<" is "<<vop[0].first<<endl;
  
}
