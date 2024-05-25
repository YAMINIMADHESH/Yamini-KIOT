#include <stdio.h>
struct User {
    int age;
    int pincode;
    long long mobile_number;
    char aadhaar_card[13];
    char debit_card_serial_number[20];
};

void inputUserInfo(struct User *user) {
    printf("Enter age: ");
    scanf("%d", &user->age);

    printf("Enter pincode: ");
    scanf("%d", &user->pincode);

    printf("Enter mobile number: ");
    scanf("%lld", &user->mobile_number);

    printf("Enter Aadhaar card number: ");
    scanf("%s", user->aadhaar_card);

    printf("Enter debit card serial number: ");
    scanf("%s", user->debit_card_serial_number);
}

void displayUserInfo(struct User user) {
    printf("\nUser Information:\n");
    printf("Age: %d\n", user.age);
    printf("Pincode: %d\n", user.pincode);
    printf("Mobile Number: %lld\n", user.mobile_number);
    printf("Aadhaar Card Number: %s\n", user.aadhaar_card);
    printf("Debit Card Serial Number: %s\n", user.debit_card_serial_number);
}

int main() {
    struct User user;


    inputUserInfo(&user);


    displayUserInfo(user);

    return 0;
}
