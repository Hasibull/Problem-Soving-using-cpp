#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;

    cin>>tc;

    while(tc--){
        int n;

        cin>>n;

        cout<<((n & 1) ? "1":"0")<<endl;
    }

    return 0;
}
