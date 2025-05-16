//a program that seives prime number from 1 to 100
#include <iostream>
#include <vector>
int main(){
    int n;
    std::cout << "Enter the number of prime numbers to generate: ";
    std::cin >> n;

    std::vector<int> primes;
    std::vector<bool> isPrime(n + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
        for (size_t j = 0; j < primes.size() && i * primes[j] <= n; ++j) {
            isPrime[i * primes[j]] = false;
            if (i % primes[j] == 0) break;
        }
    }

    std::cout << "The prime numbers from 1 to " << n << " are: ";
    for (int p : primes) {
        std::cout << p << " ";
    }
    std::cout << std::endl;

    return 0;
}