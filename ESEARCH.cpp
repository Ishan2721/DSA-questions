#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n,num;
    cout<<"Enter number of rows :";
    cin>>m;
    cout<<"Enter number of columns :";
    cin>>n;
    int mat[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"\nMATRIX :"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nENTER THE NUMBER YOU WANT TO SEARCH :";
    cin>>num;
    int r=0,c=n-1;
    int flag = 0;
    while(r<m && c>=0)
    {
        if(mat[r][c]==num)
        flag=1;
        if(mat[r][c]<num)
        r++;
        else
        c--;
    }
    if(flag=1)
    cout<<"\nELEMENT FOUND !!";
    else
    cout<<"\nELEMENT NOT FOUND :(";
    return 0;
}
