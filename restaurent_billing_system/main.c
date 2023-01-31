#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

struct items{

    char item[20];
    float price;
    int qty;

};

struct orders{
    char customer[50];
    char date [50];
    int numOfItems;
    struct items itm[50];
};

// functions to generate biils
void generateBillHeader(char name[50],char date[30]){

        printf("\n\n");
        printf("=========Kratik's Restaurant==========\n");
        printf("\n--------------------------------------\t");
        printf("\nDate: %s", date);
        printf("\nInvoice To: %s", name);
        printf("\n");
        printf("--------------------------------------\n");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Total\t\t");
        printf("\n--------------------------------------");
        printf("\n\n");
}

void generateBillBody(char item[30],int qty,float price){
    printf("%s \t\t",item);
        printf("%d \t\t",qty);
        printf("%.2f \t\t",qty * price);
        printf("\n");

}


void generateBillFooter(float total){
    printf("\n");
    float dis=0.1*total;
    float netTotal = total- dis;
    float cgst=0.09*netTotal,grandTotal=netTotal+2*cgst;
    printf("\n--------------------------------------\n");
    printf("Sub Total \t\t\t %.2f",total);
    printf("\nDiscount@10%s \t\t\t %.2f","%",dis);
    printf("\n\t\t\t--------------");
    printf("\nNet Total \t\t\t %.2f",netTotal);
    printf("\nCGST 09%s \t\t\t %.2f","%",cgst);
    printf("\nSGST 99%s \t\t\t %.2f","%",cgst);
    printf("\n--------------------------------------\n");
    printf("\nGrand Total \t\t\t %.2f",grandTotal);
    printf("\n--------------------------------------\n");
}

#include<stdio.h> 

int main(){ 
    
    float total;
    int opt,n;
    struct orders ord;
    struct orders order;
    char saveBill = 'y',contFlag = 'y';
    char name[50];
    FILE *fp;
    // dashboard
    while (contFlag =='y' )
    {
        float total =0;
        int invoiceFound = 0;
        printf("\n============Kratik's Restaurent============");
        printf("\n\n Please select your prefered operation: ");
        printf("\n1.Generate Invoice");
        printf("\n2.Show all Invoices");
        printf("\n3.Search Invoice");
        printf("\n4.Exit");

        printf("\n\n Your choice: ");
        scanf("%d",&opt);
        fgetc(stdin);
        switch (opt)
        {
        case 1:
            system("cls");
            printf("\n Please enter the name of customer: ");
            fgets(ord.customer,50,stdin);
            ord.customer[strlen(ord.customer)-1] = 0;
            strcpy(ord.date,__DATE__);
            printf("\n Please enter the number of items: ");
            scanf("%d",&n);
            ord.numOfItems = n;


            for (int i = 0; i < n; i++)
            {
                fgetc(stdin);
                printf("\n\n");
                printf("Please enter the item %d : ",i+1);
                fgets(ord.itm[i].item,20,stdin);
                ord.itm[i].item[strlen(ord.itm[i].item)-1] = 0;
                printf("please enter the quantity: ");
                scanf("%d", &ord.itm[i].qty);
                printf("Please enter the unit price: ");
                scanf("%f",&ord.itm[i].price);
                total += ord.itm[i].qty * ord.itm[i].price;
            }
            printf("qty is %f",ord.itm[0].price);
            generateBillHeader(ord.customer,ord.date);

            for (int i = 0; i < ord.numOfItems; i++)
            {
                generateBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);
            }
            generateBillFooter(total);
            
            printf("Do you want to save the invoice [y/n] :");
            scanf("%s",&saveBill);
            if (saveBill == 'y')
            {
                fp = fopen("RestaurentBill.dat","a+");
                fwrite(&ord,sizeof (struct orders),1,fp);
                if (fwrite != 0 )
                {
                    printf("Saved Successfully");
                }
                else{
                    printf("Error saving");
                    fclose(fp);
                }
            }
            break;

        case 2:
            system("cls");
            fp = fopen("RestaurentBill.dat","rb");
            printf("\n   ***** Your Previous Invoices ***** \n");
            while (fread(&order,sizeof(struct orders),1,fp))
            {
                float tot = 0;
                generateBillHeader(order.customer,order.date);
                for (int i = 0; i < order.numOfItems; i++)
                {
                    generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                    tot += order.itm[i].qty * order.itm[i].price;
                }
                generateBillFooter(tot);
            }
            fclose(fp);
            break;

        case 3:
            printf("Enter the name of custumer: ");
            // fgetc(stdin);
            fgets(name,50,stdin);
            name[strlen(name)-1]=0;
            system("cls");
            fp = fopen("RestaurentBill.dat","rb");
            printf("\n   ***** Invoices of %s ***** \n",name);
            while(fread(&order,sizeof(struct orders),1,fp)){
                float tot = 0;
                if (strcmp(order.customer,name))
                {
                    generateBillHeader(order.customer,order.date);
                    for (int i = 0; i < order.numOfItems; i++)
                    {
                        generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                        tot += order.itm[i].qty * order.itm[i].price;
                    }
                    generateBillFooter(tot);
                    invoiceFound = 1;
                }
            }
            if (invoiceFound)
            {
                printf("Sorry the invoice of %s does not found");
            }
            
            fclose(fp);
            break;

        case 4:
            printf("\n\t\t Bye Bye \t\t\n");
            int size = sizeof(struct orders);
            printf("size =",size);
            exit(0);
            break;

        default:
            printf("Sorry Invalid Option \n\n");
            break;
        }
        printf("\n\n Do you want to perform another operation [y/n]:");
        scanf("%s",&contFlag);
    }
    printf("\n\n\n\n");

    return 0;
}
