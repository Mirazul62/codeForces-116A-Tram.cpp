#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,sum=0,large=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        sum+=b-a;
        if(sum>large)
            large=sum;
    }
    cout<<large<<endl;
}
