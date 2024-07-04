#include <iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    int A[100][100] , B[100][100] ,C[100][100];
    cout << "Enter Order Of Matrix A:"<<endl;
    cin>>r1>>c1;
    cout << "Enter Order Of Matrix B:"<<endl;
    cin>>r2>>c2;
    
    if(c1 != r2)
    {
        cout << "Not Possible";
        return 1;
    }
    cout << "Enter Elements Of Matrix A:"<<endl;
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter Elements Of Matrix B:"<<endl;
    for(int i=0 ; i<r2 ; i++)
    {
        for(int j=0 ; j<c2 ; j++)
        {
            cin >> B[i][j];
        }
    }

    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c2 ; j++)
        {
            C[i][j] = 0;
            for(int k=0; k<c1 ;k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    cout << "Result:\n";
    for(int i = 0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c2 ; j++)
        {
            cout << C[i][j]<<"\t";
        }
        cout << "\n";

    }
    return 0;

}