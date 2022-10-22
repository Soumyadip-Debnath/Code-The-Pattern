#include<iostream>
using namespace std;

int main()
{
    int i, j;
    int r;
    cout<<"Enter the number of rows"<<endl;
    cin>>r;
    int c;
    cout<<"Enter the number of columns"<<endl;
    cin>>c;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
    
}