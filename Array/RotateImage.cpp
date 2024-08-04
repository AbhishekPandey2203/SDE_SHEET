// code for rotate image 2d matrix

#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<vector<int>>& matrix) {

        //it is basically a logical approach of first transpose and then reverse each row only


        // let do the transpose first--using the inplace 

         int n=matrix.size();
         int m=matrix[0].size();

         for(int i=0;i<n;i++)
         {
              for(int j=i;j<n;j++)
              {
                swap(matrix[i][j],matrix[j][i]);
              }
         }


         //let reverse the each row

         for(int i=0;i<n;i++)
         {
            for(int j=0;j<n/2;j++)
            {
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
         }



        
    }

int main()
{
    cout<<"Enter the no of row and col in matrix"<<endl;
    int n;
    cin>>n;

  vector<vector<int>> matrix(n, vector<int>(n, 0));


     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
          cin>>matrix[i][j];
            
        }
     }
   
   rotate(matrix);

      for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
          cout<<matrix[i][j]<<" ";
            
        }

        cout<<endl;
     }
   

 return 0;

}