#define N 5
#include <iostream>
using namespace std;

void printSol(int mat[N][N])
{
  for (int i=0;i<N;i++)
  {
    for (int j=0;j<N;j++)
    {
      cout << mat[i][j];
    }
  cout << endl;
 }
}

int checkPos(int mat[N][N],int row,int col)
{
  //Check on the left side
  for (int i=0;i<col;i++)
   if(mat[row][i])
    return 0;

  //Check uper left diagonal
  for (int i=row,j=col;i>=0 && j>=0;i--,j--){
     if(mat[i][j])
      return 0;
  }

  //Check lower left diagonal
  for (int i=row,j=col;i<N && j>=0;i++,j--)
  {
    if(mat[i][j])
    return 0;
  }

  return 1;

}
     
