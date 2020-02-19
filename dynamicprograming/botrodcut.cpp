/*Bottom up approach to solve rodcutting problem*/

#include <iostream>
using namespace std;

int rod(int[],int);


int main()
{

int arr[] = {0,1,5,8,9,10,17,17,20,24,30};
int n,ans;

cout << "Enter a number less than 10" << endl;
cin >> n;
ans = rod(arr,n);
cout << ans << endl;
return 0;

}

int rod(int arr[],int n )
{
int r[n+1];
int q;
r[0]=0;

for (int j=1;j<=n;j++)
{
    q=-1;
    for (int i=1;i<=j;i++)
        q = max(q,arr[i]+r[j-i]);
    r[j]=q;
}

return r[n];

}

