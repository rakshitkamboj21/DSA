#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
bool serachInrow(vector<vector<int>>&matrix,int target,int row)
{
    int n=matrix[0].size();
    int st=0,end=n-1;
    while(st<=end)
    { 
        int mid=st+(end-st)/2;
        if(target==matrix[row][mid])
        {
            return true;
        }
        else if(target>matrix[row][mid])
        {
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
bool search(vector<vector<int>>&matrix,int target)
{
    int m=matrix.size(),n=matrix[0].size();
    int startrow=0,endrow=m-1;
     while(startrow<=endrow)
     {
        int midrow=startrow+(endrow-startrow)/2;
        if(target>=matrix[midrow][0] && target<=matrix[midrow][n-1])
        {
            return serachInrow(matrix,target,midrow);
        }
        else if(target>matrix[midrow][n-1])
        {
            startrow=midrow+1;
        }
        else{
            endrow=midrow-1;
        }
     }
     return false;
}
vector<int>spiralmatrix(vector<vector<int>>matrix)
{
    int m=matrix.size(),n=matrix[0].size();
     int srow=0,scol=0,erow=m-1,ecol=n-1;
     vector<int>ans;
    while (srow <= erow && scol <= ecol)
   {
 
    for(int j=0;j<=ecol;j++)
    {
        ans.push_back(matrix[srow][j]);
    }
    for(int i=srow+1;i<=erow;i++)
    {
        ans.push_back(matrix[i][ecol]);
    }
      for (int j = ecol - 1; j >= scol; --j){
                     if (srow ==erow) {
                        break;
                }
                    ans.push_back(matrix[erow][j]);
            }

            // Left column (only if more than one column)
                for (int i = erow - 1; i >srow; --i)
                
            {
                     if (scol == ecol) {
                        break;
                }
                    ans.push_back(matrix[i][scol]);
            }    

            srow++;
            scol++;
            erow--;
            ecol--;
   }    
       return ans;
}
// two sum 
int main()
{
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=9;
    cout<<search(matrix,target);
    vector<int>arr={2,3,5,7,9,11};
    vector<int> result = spiralmatrix(matrix);

    // Print result
    for (int x : result) {
        cout << x << " ";
    }
}
