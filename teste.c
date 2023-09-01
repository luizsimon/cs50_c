#include <stdio.h>
#include <stdbool.h>

// Function to check if a character is a laptop product ID
bool isLaptopProduct(char c) {
    char laptopProductIDs[] = "aiouAEIOU";

    for (int i = 0; laptopProductIDs[i]; i++) {
        if (c == laptopProductIDs[i]) {
            return true;
        }
    }

    return false;
}

// Function to find desktop product IDs from the last N products
void findDesktopProducts(char sales_data[], int N) {
    printf("Desktop Products: ");

    for (int i = N - 1; i >= 0; i--) {
        char product_id = sales_data[i];

        if (!isLaptopProduct(product_id)) {
            printf("%c ", product_id);
        }
    }

    printf("\n");
}

int main() {
    char sales_data[] = {};
    int N = 8;

    findDesktopProducts(sales_data, N);

    return 0;
}