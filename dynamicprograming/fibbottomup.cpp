#include<bits/stdc++.h>
#include<iostream>
#define N 100

using namespace std;
long fibo(int);
void init();

const int NIL = -1;
long lookup_table[N];

int main ()
{
int a;
long fib;

cout << "Enter the number" << endl;
cin >> a;

init();
cout << fibo(a) << endl;

return 0;

}

void init()
{

lookup_table[0]=0;
lookup_table[1]=1;

for (int i=2;i<N;i++)
lookup_table[i] = NIL;
}

long fibo(int n)
{
if (n<2)
return n;

for (int i=2;i<=n;i++)
{
	lookup_table[i] = lookup_table[i-1] + lookup_table[i-2];
}
return lookup_table[n];
}

