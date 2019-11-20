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

for (int i=0;i<N;i++)
lookup_table[i] = NIL;
}

long fibo(int n)
{
if(lookup_table[n] == NIL)
{
	if (n <=1)
		lookup_table[n] = n;
	else
		lookup_table[n] = fibo(n-1) + fibo(n-2); 
}
return lookup_table[n];
}

