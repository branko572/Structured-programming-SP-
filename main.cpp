/*

Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.

Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број. За секој од нив да се испечати максималната цифра во посебен ред.

Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.

Забелешка: ЗАБРАНЕТО е користење на глобални променливи.

For example:

Input	Result
5128
4126
7258
4000
4500
6882
7762
3900
4100
4400
4897
6000
7000
7500
8002
3000
3910
4090
4110
4202
4490
4800
5000
5990
6500
6905
7010
7400
7600
8000
8005
2999
3001
3905
3999
5128
4126
7258
4000
4500
6882
7762
3900
4100
4400
4897
6000
7000
7500
8002
3000
3910
4090
4110
4202
4490
4800
5000
5990
6500
6905
7010
7400
7600
8000
8005
/
8
6
8
4
5
8
7
9
4
4
9
6
7
7
8
3
9
9
4
4
9
8
5
9
6
9
7
7
7
8
8
9
3
9
9
8
6
8
4
5
8
7
9
4
4
9
6
7
7
8
3
9
9
4
4
9
8
5
9
6
9
7
7
7
8
8




 */



#include <iostream>

using namespace std;

int findMaxDigit(int n, int maxDigit) {
    if (n == 0) {
        return maxDigit;
    }

    int cifra = n % 10;

    if (maxDigit < cifra) {
        maxDigit = cifra;
    }

    return findMaxDigit(n / 10, maxDigit);
}

int cifri(int n) {
    return findMaxDigit(n, 0);
}

int main() {
    int niza[100], n, counter = 0;

    // Specify a condition to exit the loop (e.g., use Ctrl+D to signal end-of-file)
    while (cin >> n) {
        niza[counter] = n;  // Store input in the array
        counter++;          // Increment the counter
    }

    for (int i = 0; i < counter; i++) {
        cout << cifri(niza[i]) << endl;
    }

    return 0;
}
