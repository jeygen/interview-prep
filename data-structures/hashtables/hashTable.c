int hashTable[101];

int hash(int key) {
    return key % 101;
}

int insert(int key) {
    int index = hash(key);
    if (hashTable[index] == 0) {
        hashTable[index] = key;
        return 1;
    }
    else {
        return 0;
    }
}

void display() {
    for (int i = 0; i < 101; i++) {
        if (hashTable[i] != 0) {
            printf("%d ", hashTable[i]);
        }
    }
    printf("\n");
}

void linear_probing(int key) {
    int index = hash(key);
    int i = 0;
    while (hashTable[index] != 0) {
        index = (index + 1) % 101;
        i++;
    }
    hashTable[index] = key;
}

void quadratic_probing(int key) {
    int index = hash(key);
    int i = 0;
    while (hashTable[index] != 0) {
        index = (index + i*i) % 101;
        i++;
    }
    hashTable[index] = key;
}

int search(int key) {
    int index = hash(key);
    if (hashTable[index] == key) {
        return 1;
    }
    else {
        return 0;
    }
}

int delete(int key) {
    int index = hash(key);
    if (hashTable[index] == key) {
        hashTable[index] = 0;
        return 1;
    }
    else {
        return 0;
    }
}



int main() {
    int choice;
    int key;
    while (1) {
        printf("1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(key);
                break;
            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                if (search(key)) {
                    printf("Key found\n");
                }
                else {
                    printf("Key not found\n");
                }
                break;
            case 3:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                if (delete(key)) {
                    printf("Key deleted\n");
                }
                else {
                    printf("Key not found\n");
                }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
