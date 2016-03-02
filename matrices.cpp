#include <bits/stdc++.h>
#include<fstream>

using namespace std;
int main()
{
   int m,n,o;
    int sum;
    //cout <<" Enter the values of m, n, o :";
    //cin >> m >> n >> o;
     
    ifstream mat_a("a.txt");
    ifstream mat_b("b.txt");
    
    mat_a>>m>>n;
    mat_b>>n>>o;
   int **a = new int *[m];
    for (int count = 0; count < m; count++)
    {
        a[count] = new int[n];
    }
     int **c = new int *[m];
    for (int count = 0; count < m; count++)
    {
        c[count] = new int[o];
    }
   int **b = new int *[n];
    for (int count = 0; count < n; count++)
    {
        b[count] = new int[o];
    }
    
  /*  ifstream mat_a("a.txt");
    ifstream mat_b("b.txt");
    */
   // cout <<" Enter the values of Ist matrix :";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           mat_a >> a[i][j];
        }
    }
     //cout <<" Enter the values of IInd matrix :";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<o; j++)
        {
           mat_b >> b[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<o;j++)
        {
        	 sum=0;
            for(int k=0;k<n;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            
        }
    }
    ofstream mat_c("c.txt");
    //cout <<" The multiplication matrix is : \n" ;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<o;j++)
        {
            mat_c << c[i][j] << '\t';
        }
        mat_c<<'\n';
    }
    mat_c.close();

}

