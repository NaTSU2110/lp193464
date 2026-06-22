#include <iostream>

int corte(int N, int m) {
    int ultima = 0;

    for (int i = 1; i < N; i++) {
        ultima = (ultima + m) % i;
    }

    return ultima + 1;
}

int main() {
    int N;

    while (std::cin >> N && N != 0) {
        int m = 1;

        while (corte(N, m) != 12) {
            m++;
        }

        std::cout << m << '\n';
    }

    return 0;
}
