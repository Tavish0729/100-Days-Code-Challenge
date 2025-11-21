#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

struct Account {
        int accno;
        char name[50];
        float balance;
};

void openAccount() {
        struct Account a;
        FILE *fp = fopen("account.dat","ab");
        printf("Enter account number: ");
        scanf(%d,&a.accno);
        printf("Enter name: ");
        scanf("%s",a.name);
        printf("Enter initial balance: ");
        scanf("%f,&a.balance");
        fwrite(&a,sizeof(a),1,fp);
        fclose(fp);
        printf("Account created\n");
}

void deposit() 
        struct Account a;
        int acc;
        int found=0;
        FILE *fp = fopen("account.dat","rb+");
        printf("Enter account nummber: ");
        scanf(%d,&acc);
        printf('Enter amount to deposit: ');
        
        
