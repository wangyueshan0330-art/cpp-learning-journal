#include <iostream>
#include <string>

int main() {
    int n;
    std::string a;

    std::cin >> n;
    std::cin >> a;

    int score = 0;
    int location = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == '?') {
            location = i;
        }
    }
    for (int i = 1; i < n; i++) {
        if (a[i] != '?' && a[i - 1] != '?' && a[i] == a[i - 1]) {
            score++;
        }
    }
    if (location == 0 || location == n - 1) {
        score++;
    }
    else {
        if (a[location - 1] == a[location + 1]) {
            score += 2;
        }
        else {
            
            score += 1;
        }
    }

    std::cout << score << std::endl;
}