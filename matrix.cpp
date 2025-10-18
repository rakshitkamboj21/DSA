#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// linear serach for 2D Array

pair<int,int>linearsearch(int matrix[4][4],int rows,int columns,int target)
{
      for(int i=0;i<rows;i++)
      {
        for(int j=0;j<columns;j++)
        {
            if(matrix[i][j]==target)
            {
                return {i,j};
            }
        }
      }
      return {-1,-1};
}  
// maximum of row sum
int getrowsum(int matrix[][4],int rows,int columns)

{
     int maxrowsum=INT_MIN;
     for(int i=0;i<rows;i++)
     {
        int rowsumI=0;
        for(int j=0;j<columns;j++)
        {
            rowsumI+=matrix[i][j];
        }
        maxrowsum=max(maxrowsum,rowsumI);
     }
     return maxrowsum;
}

// maximum column sum

int getcolumnsum(int matrix[][4],int rows,int columns)

{
     int maxcolumnsum=INT_MIN;
     for(int j=0;j<columns;j++)
     {
        int columnsumI=0;
        for(int i=0;i<rows;i++)
        {
            columnsumI+=matrix[i][j];
        }
        maxcolumnsum=max(maxcolumnsum,columnsumI);
     }
     return maxcolumnsum;
}
// diagonal sum 

int diagonalsum(int matrix[][4],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j)
           {
             sum+=matrix[i][j];
           }
           else if(j==n-1-i)
           {
              sum+=matrix[i][j];
           }
        }
    }
    return sum;
}
int main()
{
    int matrix[4][4]={{1,2,3,4} ,{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rows=4;
    int columns=3;
    int n=4;
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    pair<int,int>result=linearsearch(matrix,rows,columns,20);
    cout<<getrowsum(matrix,rows,columns)<<endl;
    cout<<getcolumnsum(matrix,rows,columns)<<endl;
    cout<<diagonalsum(matrix,n)<<endl;
    cout<<"fist index is "<<result.first<<" and second index is " <<result.second<<endl;
}