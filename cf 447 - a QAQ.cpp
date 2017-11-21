#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(){

string a;
cin>>a;

int i, j, k;
int cnt = 0;

for (i = 1; i <= a.size(); i++)
    if(a[i] == 'A')
        for(j = i-1; j >= 0; j--)
            if(a[j] == 'Q')
            {
                for(k = i+1; k <= a.size(); k++)
                    if(a[k] == 'Q')
                        cnt++;
            }

cout<<cnt;


}
