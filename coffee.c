#include <stdio.h>

int main() {
    int choice, milk_type, sugar_type, money, bill_amount = 0;
    char add_more = 'y';
    
    printf("Welcome to the coffee vending machine!\n");
    
    while (add_more == 'y') {
        printf("Please select your coffee type:\n");
        printf("1. Espresso\n2. Cappuccino\n3. Latte\n");
        scanf("%d", &choice);
        
        printf("Please select your milk type:\n");
        printf("1. Full fat\n2. Skim\n3. Soy\n");
        scanf("%d", &milk_type);
        
        printf("Please select your sugar type:\n");
        printf("1. White\n2. Brown\n");
        scanf("%d", &sugar_type);
        
        switch(choice) {
            case 1:
                bill_amount += 50;
                break;
            case 2:
                bill_amount += 60;
                break;
            case 3:
                bill_amount += 70;
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }
        
        switch(milk_type) {
            case 1:
                bill_amount += 10;
                break;
            case 2:
                bill_amount += 10;
                break;
            case 3:
                bill_amount += 20;
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }
        
        switch(sugar_type) {
            case 1:
                bill_amount += 5;
                break;
            case 2:
                bill_amount += 10;
                break;
            default:
                printf("Invalid choice!\n");
                continue;
        }
        
        printf("Your total bill amount is Rs. %d\n", bill_amount);
        
        printf("Do you want to add anything else to your order? (y/n)\n");
        scanf(" %c", &add_more);
    }
    
    printf("Please enter the cash amount");
    
    
    
    




if (money < bill_amount) {
    printf("Sorry, the entered amount is not enough to pay for your order.\n");
} else {
    int change = money - bill_amount;
    printf("Thank you for your purchase. Your change is Rs. %d\n", change);
    
    // Generate the bill as a file
    FILE *bill_file = fopen("bill.txt", "w");
    fprintf(bill_file, "Bill Amount: Rs. %d\n", bill_amount);
    fprintf(bill_file, "Paid Amount: Rs. %d\n", money);
    fprintf(bill_file, "Change Amount: Rs. %d\n", change);
    fclose(bill_file);
}

return 0;

}
