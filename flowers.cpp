#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
   sort(ar, ar+n,greater<int>());
   int q,money=0;
   for(int it=0;it<n;++it)
    {
        q=(it)/k;
        money+=(q+1)*ar[it];
    }
    cout<<money<<endl;
   return 0;
}
