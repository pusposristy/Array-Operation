
#include <stdio.h>

int arr[200] = {70, 60, 50, 40, 30, 25, 20};
int size = 7;

void insert() {
    if (size >= 200) {
        printf("Array is full!\n");
        return;
    }
    int pos, value;
    printf("Enter position to insert (1-%d): ", size + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position!\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    for (int i = size; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    size++;

    printf("Data inserted successfully!\n");
}
void update() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }
    int pos, value;
    printf("Enter position to update (1-%d): ", size);
    scanf("%d", &pos);
    if (pos < 1 || pos > size) {
        printf("Invalid position!\n");
        return;
    }

    printf("Enter new value: ");
    scanf("%d", &value);
    arr[pos - 1] = value;
    printf("Data updated successfully!\n");
}

void display() {
    if (size == 0) {
        printf("Array is empty!\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void search() {
    int value, found = 0;
    printf("Enter value to search: ");
    scanf("%d", &value);
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("Value found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Value not found in array.\n");
    }
}
int main() {
    int choice;

    do {
        printf("\nArray Operations Menu:\n");
        printf("1. Insert\n2. Update\n4. Display\n5. Search\n7. Exit\n");
        printf("Enter operation number: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                update();
                break;
            case 4:
                display();
                break;
            case 5:
                search();
                break;
            case 7:
                printf("Exit permitted.\n");
                break;
            default:
                printf("Invalid operation! Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
