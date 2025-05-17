#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int binToDec(const char* s) {
    return (int) strtol(s, NULL, 2);
}

double dist(int r1, int g1, int b1, int r2, int g2, int b2) {
    return sqrt(pow(r1 - r2, 2) + pow(g1 - g2, 2) + pow(b1 - b2, 2));
}

char** closestColor(int pixels_count, const char** pixels, int* result_count) {
    const char* colors_names[] = {"Black", "White", "Red", "Green", "Blue"};
    int colors[5][3] = {
        {0, 0, 0}, {255, 255, 255}, {255, 0, 0}, {0, 255, 0}, {0, 0, 255}
    };

    char** result = (char**) malloc(pixels_count * sizeof(char*));
    *result_count = pixels_count;

    for (int i = 0; i < pixels_count; i++) {
        int r = binToDec(pixels[i]);
        int g = binToDec(pixels[i] + 8);
        int b = binToDec(pixels[i] + 16);

        double mn = INT_MAX;
        int best_index = 0;

        for (int j = 0; j < 5; j++) {
            double d = dist(r, g, b, colors[j][0], colors[j][1], colors[j][2]);
            if (d < mn) {
                mn = d;
                best_index = j;
            }
        }

        result[i] = (char*) malloc(10 * sizeof(char));
        strcpy(result[i], colors_names[best_index]);
    }

    return result;
}

int main() {
    const char* pixels[] = {
        "000000001111111100000110",
        "111111110000000011111111"
    };
    int pixels_count = 2;
    int result_count;

    char** result = closestColor(pixels_count, pixels, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}