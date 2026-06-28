#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    int id;
    char name[50];
    int quantity;
    float price;
} Item;

Item inventory[MAX_ITEMS];
int itemCount = 0;

void addItem() {
    if (itemCount >= MAX_ITEMS) {
        printf("\nInventory is full!\n");
        return;
    }
    
    Item newItem;
    printf("\nEnter Item ID: ");
    scanf("%d", &newItem.id);
    
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == newItem.id) {
            printf("Error: Item ID already exists!\n");
            return;
        }
    }
    
    printf("Enter Item Name: ");
    scanf(" %[^\n]s", newItem.name);
    printf("Enter Quantity: ");
    scanf("%d", &newItem.quantity);
    printf("Enter Price: ");
    scanf("%f", &newItem.price);
    
    inventory[itemCount] = newItem;
    itemCount++;
    printf("Item added successfully!\n");
}

void displayInventory() {
    if (itemCount == 0) {
        printf("\nInventory is empty!\n");
        return;
    }
    
    printf("\n=== Current Inventory ===\n");
    printf("%-10s %-25s %-10s %-10s\n", "ID", "Name", "Quantity", "Price");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%-10d %-25s %-10d $%-9.2f\n", 
               inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

void updateStock() {
    int id, found = 0;
    printf("\nEnter Item ID to update: ");
    scanf("%d", &id);
    
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            printf("Current Quantity: %d\n", inventory[i].quantity);
            printf("Enter New Quantity: ");
            scanf("%d", &inventory[i].quantity);
            printf("Stock updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Item ID not found!\n");
    }
}

void searchItem() {
    int id, found = 0;
    printf("\nEnter Item ID to search: ");
    scanf("%d", &id);
    
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            printf("\nItem Found:\n");
            printf("ID: %d\n", inventory[i].id);
            printf("Name: %s\n", inventory[i].name);
            printf("Quantity: %d\n", inventory[i].quantity);
            printf("Price: $%.2f\n", inventory[i].price);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Item ID not found!\n");
    }
}

int main() {
    int choice;
    
    while (1) {
        printf("\n*** Inventory Management System ***\n");
        printf("1. Add New Item\n");
        printf("2. Display Inventory\n");
        printf("3. Update Stock Quantity\n");
        printf("4. Search Item\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayInventory();
                break;
            case 3:
                updateStock();
                break;
            case 4:
                searchItem();
                break;
            case 5:
                printf("\nExiting program...\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}
