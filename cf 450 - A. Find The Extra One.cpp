#include <iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;
    int x[500000], y[500000];

    int j;
    int ok1 = 0;
    int ok2 = 0;

    for(i = 0; i < n; i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    for(i = 0; i < n; i++)
        {if(x[i] > 0) ok1++;
         if(x[i] <0 ) ok2++;}

    if(ok1 - 1 <= 0 && ok2 - 1 > 0) cout<<"Yes";
        else if(ok1 - 1 > 0 && ok2 - 1 <= 0) cout<<"Yes";
                else cout<<"No";
}
