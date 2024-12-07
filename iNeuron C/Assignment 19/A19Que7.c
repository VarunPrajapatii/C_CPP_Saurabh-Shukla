// Que7
// 7. From the list of IP addresses, check whether all ip addresses are valid.

#include <stdio.h>
#include <string.h>

int isValidIP(char ip[]) {
    int num = 0, i = 0, dots = 0, len = strlen(ip);
    char part[4]; // To store each octet as a string

    // Loop through the IP address
    for (int j = 0; j < len; j++) {
        if (ip[j] == '.' || j == len - 1) { // If dot or end of string, we have found an octet
            if (j == len - 1 && ip[j] != '.') {
                part[i] = ip[j]; // For last digit if there's no dot at the end
                i++;
            }
            part[i] = '\0'; // Null-terminate the current part
            i = 0;

            // Check if the current part is a valid number
            num = 0;
            for (int k = 0; k < strlen(part); k++) {
                if (part[k] < '0' || part[k] > '9') { // If part contains a non-digit
                    return 0;  // Invalid part
                }
                num = num * 10 + (part[k] - '0'); // Convert part to number
            }

            // Check if the number is in the range 0 to 255
            if (num < 0 || num > 255) {
                return 0; // Invalid range
            }

            dots++; // Count the number of dots
        } else {
            part[i++] = ip[j]; // Add the character to the current part
        }
    }

    // Check if the number of parts (dots) is exactly 3 (for a total of 4 parts)
    if (dots != 3) {
        return 0; // Invalid number of parts
    }

    return 1; // Valid IP address
}

int main() {
    int n, i;
    printf("This program checks whether all IP addresses are valid.\n");
    printf("Enter number of IP addresses: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    char ipAddresses[n][16];

    printf("Enter %d IP addresses:\n", n);
    for(i = 0; i < n; i++) {
        fgets(ipAddresses[i], 16, stdin);
        ipAddresses[i][strcspn(ipAddresses[i], "\n")] = '\0'; // Remove newline character
    }

    int validCount = 0;
    for(i = 0; i < n; i++) {
        if(isValidIP(ipAddresses[i])) {
            validCount++;
        }
    }

    if(validCount == n) {
        printf("All IP addresses are valid.\n");
    } else {
        printf("Not all IP addresses are valid.\n");
    }

    return 0;
}
