/*
for n=5:
*
**
***
****
*****

for n=3:
*
**
***

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
