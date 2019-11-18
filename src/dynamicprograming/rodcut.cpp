#include <iostream>
using namespace std;

int rod(int[],int);
int retmax(int,int);

int main()
{

int arr[] = {1,5,8,9,10,17,17,20,24,30};
int n,ans;
cout << "Enter a number less than 10" << endl;
cin >> n;
ans = rod(arr,n);
cout << ans << endl;
return 0;

}

int rod(int arr[],int n )
{
if (n ==0 )
return 0;

int q;
q=-1;

for (int i=1;i<=n;i++)
{
q = retmax(q,arr[i-1]+rod(arr,n-i));
}
return q;
}

int retmax(int a, int b){
return a>b ? a:b;
}
