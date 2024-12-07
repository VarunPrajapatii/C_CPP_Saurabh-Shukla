// Que8. Given a list of words followed by two words, the task is to find the minimum distance 
// between the given two words in the list of words.  
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} 
//       word1 = “the”, word2 = “fox”, OUTPUT : 1 )


#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    int n, i, pos1 = -1, pos2 = -1, minDistance = INT_MAX;

    printf("This program finds the minimum distance between two given words in a list of words.\n");

    printf("Enter the number of words in the list: ");
    scanf("%d", &n);
    getchar();
    char words[n][20];

    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        fgets(words[i], 20, stdin);
        words[i][strcspn(words[i], "\n")] = '\0';
    }

    char word1[20], word2[20];
    printf("Enter the first word: ");
    fgets(word1, 20, stdin);
    word1[strcspn(word1, "\n")] = '\0';

    printf("Enter the second word: ");
    fgets(word2, 20, stdin);
    word2[strcspn(word2, "\n")] = '\0';

    for (i = 0; i < n; i++) {
        if (strcmp(words[i], word1) == 0) {
            pos1 = i;
        } else if (strcmp(words[i], word2) == 0) {
            pos2 = i;
        }
        if (pos1 != -1 && pos2 != -1) {
            int distance = pos1 > pos2 ? pos1 - pos2 : pos2 - pos1;
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
    }

    if (minDistance == INT_MAX) {
        printf("One or both words are not present in the list.\n");
    } else {
        printf("The minimum distance between '%s' and '%s' is: %d\n", word1, word2, minDistance);
    }

    return 0;
}
