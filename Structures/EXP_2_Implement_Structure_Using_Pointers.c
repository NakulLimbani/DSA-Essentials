#include <stdio.h>
struct BankAccount
{
    char Name[50];
    int AccNo;
    double Balance;

    struct Amount
    {
        double Amount;
    }A1;
    
};
int main()
{
    struct BankAccount B;
    struct BankAccount *ptr;
    ptr =&B;
    printf("Enter Account Holder Name:\n");
    scanf("%s",&B.Name);
    printf("Account Number:\n");
    scanf("%d",&B.AccNo);
    printf("Enter Your Balance:\n");
    scanf("%lf",&B.Balance);
    printf("Account Holder Details:\n");
    printf("Name:%s\n" ,ptr->Name);
    printf("Acc No: %d\n" ,ptr->AccNo);
    printf("Balance: %.2lf\n" ,ptr->Balance);
    printf("Amount Withdraw:\n");
    scanf("%lf",&B.A1.Amount);
    printf("Amount left in Acc:\n %.2lf",B.Balance-B.A1.Amount);
    return 0;
}
