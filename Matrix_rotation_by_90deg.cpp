#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter number of columns : ";
    cin>>c;
    int arr[r][c];
    cout<<"Enter matrix : \n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    for(int i=0;i<r;i++)
    {
        for(int j=i+1;j<c;j++)
        {
          swap(arr[i][j],arr[j][i]);
        }
    }
    for(int k=0;k<c;k++)
    {
        int low=0,high=r-1;
        while(low<high)
        {
            swap(arr[low][k],arr[high][k]);
            low++;
            high--;
        }
    }
    cout<<"Matrix after rotation is : \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}
