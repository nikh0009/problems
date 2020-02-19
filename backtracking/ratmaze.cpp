/*
Another problem for backtracking...
Classical rat in a maze problem.
Credit geeks for geeks
*/
#include <iostream>
#define N 4

using namespace std;

int mazeUtil(int mat[N][N],int x,int y,int sol[N][N]);

void initmat (int sol[N][N])
{
    for (int i =0;i<N;i++)
        for(int j=0;j<N;j++)
            sol[i][j] = 0;
}

int checkValid(int x,int y,int mat[N][N])
{
   return (x >=0 && x<N && y>=0 && y<N 
                &&  mat[x][y]== 1);
}

void printSolution(int sol[N][N]){

for (int i=0;i<N;i++)
{
for (int j=0;j<N;j++)
{
cout << sol[i][j] << " ";
}
cout << endl;
}
}

int maze ()
{
int sol[N][N];
int mat[N][N] = {{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};

initmat(sol);

if(mazeUtil(mat,0,0,sol) == 0){
cout << "No solution for this matrix!" << endl;
return 0;
}

printSolution(sol);
return 1;

} 

int mazeUtil (int mat[N][N],int x,int y, int sol[N][N])
{

if (x == N-1 && y == N-1)
{
sol[x][y] = 1;
return 1;
}

if (checkValid(x,y,mat))
{
sol[x][y] = 1;

if (mazeUtil(mat,x,y+1,sol))
return 1;

if (mazeUtil(mat,x+1,y,sol))
return 1;

sol[x][y] =0;
return 0;

}
return 0;
}

int main()
{
maze();
return 0;
}


