#include <iostream>
using namespace std;

int main()
{
    int r1,c1,r2,c2;
    cout << "Enter Order Of matrix 1:"<<endl;
    cin >> r1 >> c1;
    cout << "Enter Order Of matrix 2:"<<endl;
    cin >> r2 >> c2;

    if(c1 != r2)
    {
        cout << "Matrix Multiplication is Not Possible!";
    }

    int **A = (int**)malloc(r1 * sizeof(int*));
    for(int i=0 ; i<r1 ;i++)
    {
        A[i] = (int*)malloc(c1*sizeof(int));
    }
    int **B = (int**)malloc(r2*sizeof(int*));
    for(int i=0;i<r2;i++)
    {
        B[i]= (int*)malloc(c2*sizeof(int));
    }
    int **C = (int**)malloc(r1*sizeof(int*));
    for(int i=0;i<r1;i++)
    {
        C[i]= (int*)malloc(c2*sizeof(int));
    }
    cout << "Enter Elements Of Matrix A:"<<endl;
    for(int i = 0 ;i <r1 ; i++)
    {
        for(int j = 0 ;j <c1 ; j++)
        {
            cin>>A[i][j];
        }
    }
    cout << "Enter Elements Of Matrix B:"<<endl;
    for(int i = 0 ;i <r2 ; i++)
    {
        for(int j = 0 ;j <c2 ; j++)
        {
            cin>>B[i][j];
        }
    }
    
    for(int i = 0 ;i <r1 ; i++)
    {
        for(int j = 0 ;j <c2 ; j++)
        {
            C[i][j]=0;
            for(int k=0 ; k<c1 ; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    cout << "Resultant Matrix C:"<<endl;
    for(int i =0 ; i<r1 ; i++)
    {
        for(int j=0 ; j< c2 ; j++)
        {
            cout << C[i][j]<<"\t";
        }
        cout<<"\n";
    }

    for(int i = 0 ; i<r1 ; i++)
    {
        free(A[i]);
    }free(A);

    for(int i = 0 ; i<r2 ; i++)
    {
        free(B[i]);
    }free(B);

    for(int i = 0 ; i<r1 ; i++)
    {
        free(C[i]);
    }free(C);

    return 0;

}
