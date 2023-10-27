#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void substring(char* dest, char* src, int start, int end) {
    int length = strlen(src);
    if (start < 0 || start >= length || end < start) {
        strcpy(dest, "");
        return;
    }
    if (end < 0) {
        end = length + end;
    }
    if (end > length) {
        end = length;
    }
    strncpy(dest, src + start, end - start + 1);
    dest[end - start + 1] = '\0';
}

int main() {
    char input[100];
    scanf("%s", input);

    int start = strchr(input, '{') - input;
    int end = strchr(input, '}') - input;
    if (start >= 0 && end >= 0 && start < end) {
        char range[100];
        strncpy(range, input + start + 1, end - start - 1);
        range[end - start - 1] = '\0';
        char* commaPos = strchr(range, ',');
        if (commaPos != NULL) {
            *commaPos = '\0';
            char* rangeStartStr = range;
            char* rangeEndStr = commaPos + 1;
            int rangeStart;
            int rangeEnd;
            if (strlen(rangeStartStr) == 0) {
                rangeStart = 0;
            }
            else {
                rangeStart = atoi(rangeStartStr);
            }
            if (strlen(rangeEndStr) == 0) {
                rangeEnd = strlen(input);
            }
            else {
                if (rangeEndStr[0] == '-') {
                    rangeEnd = strlen(input) + atoi(rangeEndStr);
                }
                else {
                    rangeEnd = atoi(rangeEndStr);
                }
            }
            char substr[100];
            substring(substr, input, rangeStart, rangeEnd);
            char* pos = strchr(substr, '{');
            if (pos != NULL) {
                *pos = '\0';
            }
            printf("%s\n", substr);
        }
    }
    else {
        printf("Error\n");
    }

    return 0;
}



