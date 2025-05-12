#include <stdio.h>

typedef struct InventoryItem
{
    char name[50];
    int itemID;
    float price;
    int quantity;
} Item_t;

void updatePrice(Item_t *p_item, float newPrice);

int main()
{
    Item_t item1 = {
        .name = "Laptop", .itemID = 101, .price = 1250.75f, .quantity = 15};
    printf("--- Initial Item Details ---\n");
    printf("Name: %s\n", item1.name);
    printf("ID: %d\n", item1.itemID);
    printf("Price: %.2f\n", item1.price);
    printf("Quantity: %d\n", item1.quantity);

    Item_t *p_item1 = &item1;
    printf("\n--- Access via Pointer ---\n");
    printf("Item ID via pointer: %d\n", p_item1->itemID);
    printf("Item Name via pointer: %s\n", p_item1->name);

    printf("\n--- Updating Price ---\n");
    printf("Calling updatePrice function...\n");
    updatePrice(p_item1, 1199.99f);
    printf("Updated price: %.2f", p_item1->price);

    return 0;
}

void updatePrice(Item_t *p_item, float newPrice)
{
    if (p_item == NULL)
    {
        return;
    }
    p_item->price = newPrice;
}
