#include <iostream>
using namespace std;

int memorod(int[],int,int[]);
int rodcut(int[],int);

int main()
{

int arr[] = {1,5,8,9,10,17,17,20,24,30};
int n,ans;
cout << "Enter a number less than 10" << endl;
cin >> n;
ans = rodcut(arr,n);
cout << ans << endl;
return 0;

}

int rodcut(int arr[],int n)
{
int r[n+1];
for (int i=0;i<n;i++)
r[i]=-1;

return memorod(arr,n,r);
}

int memorod(int arr[],int n,int r[])
{
int q;

if (r[n] >=0 )
return r[n];

if (n == 0)
q= 0;
else
{
	q = -1;
	for (int i=1;i<=n;i++)
	{
		q = max(q,arr[i-1]+memorod(arr,n-i,r));
	}
}
r[n]=q;
return q;
}
