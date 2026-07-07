#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    int quantity;
    float price;
    char category[MAX_NAME_LENGTH];
} Item;

Item inventory[MAX_ITEMS];
int itemCount = 0;

void displayMenu() {
    printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
    printf("1. Add Item\n");
    printf("2. Display All Items\n");
    printf("3. Search Item\n");
    printf("4. Update Item Quantity\n");
    printf("5. Update Item Price\n");
    printf("6. Remove Item\n");
    printf("7. Calculate Total Inventory Value\n");
    printf("8. Check Low Stock Items\n");
    printf("9. Display Items by Category\n");
    printf("10. Edit Item Details\n");
    printf("11. Exit\n");
    printf("=================================================\n");
    printf("Enter your choice (1-11): ");
}

void addItem() {
    if (itemCount >= MAX_ITEMS) {
        printf("Inventory is FULL! Cannot add more items.\n");
        return;
    }
    
    printf("\n--- Add New Item ---\n");
    printf("Enter Item ID: ");
    scanf("%d", &inventory[itemCount].id);
    getchar();
    
    printf("Enter Item Name: ");
    fgets(inventory[itemCount].name, MAX_NAME_LENGTH, stdin);
    inventory[itemCount].name[strcspn(inventory[itemCount].name, "\n")] = '\0';
    
    printf("Enter Quantity: ");
    scanf("%d", &inventory[itemCount].quantity);
    
    printf("Enter Price: ");
    scanf("%f", &inventory[itemCount].price);
    getchar();
    
    printf("Enter Category: ");
    fgets(inventory[itemCount].category, MAX_NAME_LENGTH, stdin);
    inventory[itemCount].category[strcspn(inventory[itemCount].category, "\n")] = '\0';
    
    itemCount++;
    printf("Item added successfully!\n");
}

void displayAllItems() {
    if (itemCount == 0) {
        printf("Inventory is EMPTY!\n");
        return;
    }
    
    printf("\n========== INVENTORY LIST ==========\n");
    printf("%-5s %-20s %-10s %-10s %-15s\n", "ID", "Name", "Qty", "Price", "Category");
    printf("=====================================\n");
    
    for (int i = 0; i < itemCount; i++) {
        printf("%-5d %-20s %-10d %-10.2f %-15s\n", 
               inventory[i].id, inventory[i].name, inventory[i].quantity, 
               inventory[i].price, inventory[i].category);
    }
    
    printf("=====================================\n");
}

void searchItem() {
    if (itemCount == 0) {
        printf("Inventory is EMPTY!\n");
        return;
    }
    
    printf("\nSearch by: 1. ID  2. Name\n");
    printf("Enter choice: ");
    int searchChoice;
    scanf("%d", &searchChoice);
    getchar();
    
    if (searchChoice == 1) {
        printf("Enter Item ID: ");
        int id;
        scanf("%d", &id);
        
        for (int i = 0; i < itemCount; i++) {
            if (inventory[i].id == id) {
                printf("\n--- Item Found ---\n");
                printf("ID: %d\n", inventory[i].id);
                printf("Name: %s\n", inventory[i].name);
                printf("Quantity: %d\n", inventory[i].quantity);
                printf("Price: %.2f\n", inventory[i].price);
                printf("Category: %s\n", inventory[i].category);
                return;
            }
        }
        printf("Item with ID %d not found!\n", id);
    } 
    else if (searchChoice == 2) {
        printf("Enter Item Name: ");
        char searchName[MAX_NAME_LENGTH];
        fgets(searchName, MAX_NAME_LENGTH, stdin);
        searchName[strcspn(searchName, "\n")] = '\0';
        
        for (int i = 0; i < itemCount; i++) {
            if (strcmp(inventory[i].name, searchName) == 0) {
                printf("\n--- Item Found ---\n");
                printf("ID: %d\n", inventory[i].id);
                printf("Name: %s\n", inventory[i].name);
                printf("Quantity: %d\n", inventory[i].quantity);
                printf("Price: %.2f\n", inventory[i].price);
                printf("Category: %s\n", inventory[i].category);
                return;
            }
        }
        printf("Item '%s' not found!\n", searchName);
    }
}

void updateQuantity() {
    printf("Enter Item ID: ");
    int id;
    scanf("%d", &id);
    
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            printf("Current Quantity: %d\n", inventory[i].quantity);
            printf("Enter New Quantity: ");
            scanf("%d", &inventory[i].quantity);
            printf("Quantity updated successfully!\n");
            return;
        }
    }
    printf("Item with ID %d not found!\n", id);
}

void updatePrice() {
    printf("Enter Item ID: ");
    int id;
    scanf("%d", &id);
    
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            printf("Current Price: %.2f\n", inventory[i].price);
            printf("Enter New Price: ");
            scanf("%f", &inventory[i].price);
            printf("Price updated successfully!\n");
            return;
        }
    }
    printf("Item with ID %d not found!\n", id);
}

void removeItem() {
    printf("Enter Item ID to Remove: ");
    int id;
    scanf("%d", &id);
    
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            for (int j = i; j < itemCount - 1; j++) {
                inventory[j] = inventory[j + 1];
            }
            itemCount--;
            printf("Item removed successfully!\n");
            return;
        }
    }
    printf("Item with ID %d not found!\n", id);
}

void calculateTotalValue() {
    if (itemCount == 0) {
        printf("Inventory is EMPTY!\n");
        return;
    }
    
    float totalValue = 0;
    printf("\n========== INVENTORY VALUE ==========\n");
    printf("%-5s %-20s %-10s %-10s %-15s\n", "ID", "Name", "Qty", "Total Value", "");
    printf("=====================================\n");
    
    for (int i = 0; i < itemCount; i++) {
        float itemValue = inventory[i].quantity * inventory[i].price;
        totalValue += itemValue;
        printf("%-5d %-20s %-10d %-10.2f\n", 
               inventory[i].id, inventory[i].name, inventory[i].quantity, itemValue);
    }
    
    printf("=====================================\n");
    printf("Total Inventory Value: %.2f\n", totalValue);
}

void checkLowStock() {
    printf("Enter Low Stock Threshold (Quantity): ");
    int threshold;
    scanf("%d", &threshold);
    
    printf("\n--- Low Stock Items ---\n");
    printf("%-5s %-20s %-10s\n", "ID", "Name", "Qty");
    printf("==========================\n");
    
    int found = 0;
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].quantity <= threshold) {
            printf("%-5d %-20s %-10d\n", 
                   inventory[i].id, inventory[i].name, inventory[i].quantity);
            found = 1;
        }
    }
    
    if (!found)
        printf("No items below threshold!\n");
}

void displayByCategory() {
    if (itemCount == 0) {
        printf("Inventory is EMPTY!\n");
        return;
    }
    
    printf("Enter Category: ");
    char category[MAX_NAME_LENGTH];
    getchar();
    fgets(category, MAX_NAME_LENGTH, stdin);
    category[strcspn(category, "\n")] = '\0';
    
    printf("\n========== Items in Category: %s ==========\n", category);
    printf("%-5s %-20s %-10s %-10s\n", "ID", "Name", "Qty", "Price");
    printf("================================================\n");
    
    int found = 0;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(inventory[i].category, category) == 0) {
            printf("%-5d %-20s %-10d %-10.2f\n", 
                   inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            found = 1;
        }
    }
    
    if (!found)
        printf("No items found in this category!\n");
}

void editItem() {
    printf("Enter Item ID to Edit: ");
    int id;
    scanf("%d", &id);
    
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i].id == id) {
            printf("\n--- Edit Item ---\n");
            printf("1. Edit Name\n");
            printf("2. Edit Quantity\n");
            printf("3. Edit Price\n");
            printf("4. Edit Category\n");
            printf("Enter choice: ");
            int choice;
            scanf("%d", &choice);
            getchar();
            
            switch (choice) {
                case 1:
                    printf("Enter New Name: ");
                    fgets(inventory[i].name, MAX_NAME_LENGTH, stdin);
                    inventory[i].name[strcspn(inventory[i].name, "\n")] = '\0';
                    break;
                case 2:
                    printf("Enter New Quantity: ");
                    scanf("%d", &inventory[i].quantity);
                    break;
                case 3:
                    printf("Enter New Price: ");
                    scanf("%f", &inventory[i].price);
                    break;
                case 4:
                    printf("Enter New Category: ");
                    fgets(inventory[i].category, MAX_NAME_LENGTH, stdin);
                    inventory[i].category[strcspn(inventory[i].category, "\n")] = '\0';
                    break;
                default:
                    printf("Invalid choice!\n");
                    return;
            }
            printf("Item updated successfully!\n");
            return;
        }
    }
    printf("Item with ID %d not found!\n", id);
}

int main() {
    int choice;
    
    printf("==========================================\n");
    printf("WELCOME TO INVENTORY MANAGEMENT SYSTEM\n");
    printf("==========================================\n");
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayAllItems();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                updateQuantity();
                break;
            case 5:
                updatePrice();
                break;
            case 6:
                removeItem();
                break;
            case 7:
                calculateTotalValue();
                break;
            case 8:
                checkLowStock();
                break;
            case 9:
                displayByCategory();
                break;
            case 10:
                editItem();
                break;
            case 11:
                printf("Exiting system. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option (1-11).\n");
        }
    }
    
    return 0;
}
