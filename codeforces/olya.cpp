#include <bits/stdc++.h>
using namespace std;

vector<int> extract_rgb(const string &binary) {
    int red = stoi(binary.substr(0, 8), nullptr, 2);
    int green = stoi(binary.substr(8, 8), nullptr, 2);
    int blue = stoi(binary.substr(16, 8), nullptr, 2);
    return {red, green, blue};
}

int calculate_distance(const vector<int> &pixel, const vector<int> &color) {
    int red_diff = pixel[0] - color[0];
    int green_diff = pixel[1] - color[1];
    int blue_diff = pixel[2] - color[2];
    return red_diff * red_diff + green_diff * green_diff + blue_diff * blue_diff;
}

string find_closest_color(const string &binary) {
    vector<int> pixel = extract_rgb(binary);
    
    vector<pair<string, vector<int>>> colors = {
        {"Black", {0, 0, 0}}, {"White", {255, 255, 255}}, 
        {"Red", {255, 0, 0}}, {"Green", {0, 255, 0}}, {"Blue", {0, 0, 255}}
    };

    int min_distance = INT_MAX;
    string closest_match;
    int same_distance_count = 0;

    for (const auto &color : colors) {
        int distance = calculate_distance(pixel, color.second);
        
        if (distance < min_distance) {
            min_distance = distance;
            closest_match = color.first;
            same_distance_count = 1;
        } else if (distance == min_distance) {
            same_distance_count++;
        }
    }

    return (same_distance_count > 1) ? "Ambiguous" : closest_match;
}

int main() {
    vector<string> pixels = {"000000001111111100000110"};
    
    for (const string &pixel : pixels) {
        cout << find_closest_color(pixel) << endl;
    }
    
    return 0;
}