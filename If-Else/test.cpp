#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>

using namespace std;

int main() {

    auto start = chrono::high_resolution_clock::now();

    int limit = 1000000;
    vector<int> primes;

    for (int n = 2; n <= limit; n++) {

        bool isPrime = true;

        for (int i = 2; i <= sqrt(n); i++) {

            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes.push_back(n);
        }
    }

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = end - start;

    cout << "Total prime numbers: " << primes.size() << endl;
    cout << "Last prime: " << primes.back() << endl;
    cout << "Time taken: " << elapsed.count() << " seconds" << endl;

    return 0;
}