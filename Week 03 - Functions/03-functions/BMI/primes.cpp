#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;


/*------------------------------------------------------------
    Get all primes up to max using an optimized sieve
------------------------------------------------------------*/
vector<long long> getPrimes(long long max) {
    vector<bool> sieve(max + 1, false);
    vector<long long> primes;
    primes.push_back(2);

    for (long long i = 3; i <= max; i += 2) {
        if (!sieve[i]) {
            primes.push_back(i);
            for (long long j = i * i; j <= max; j += 2 * i) {   // Skip even multiples and skip multiples less than i*i
                sieve[j] = true;
            }
        }
    }
    return primes;
}

/*------------------------------------------------------------
    Find prime factors recursively
------------------------------------------------------------*/
bool findPrimeFactors(long long num,
                      const vector<long long>& primes,
                      vector<long long>& factors,
                      size_t startIndex = 0) {

    long long sqrtNum = static_cast<long long>(sqrt(num));

    for (size_t i = startIndex; i < primes.size(); i++) {
        if (primes[i] > sqrtNum) {
            factors.push_back(num);
            break;
        }
        if (num % primes[i] == 0) {
            factors.push_back(primes[i]);
            return findPrimeFactors(num / primes[i], primes, factors, i);
        }
    }

    return (factors.size() == 1);
}

/*------------------------------------------------------------
    Collect terms like 2^10 instead of repeated factors
------------------------------------------------------------*/
string collectTerms(const vector<long long>& factors) {
    string result;
    for (size_t i = 0; i < factors.size(); i++) {
        long long base = factors[i];
        int power = 1;

        while (i + 1 < factors.size() && factors[i + 1] == base) {
            power++;
            i++;
        }

        if (!result.empty())
            result += " × ";

        result += to_string(base);
        if (power > 1)
            result += "^" + to_string(power);
    }
    return result;
}

/*------------------------------------------------------------
    Main
------------------------------------------------------------*/
int main() {
    cout << "Give me your favorite number: ";

    long long number;
    cin >> number;

    const long long max = 100000007;
    cout << "\nGenerating primes up to " << max << "...\n";

    auto start = high_resolution_clock::now();

    vector<long long> primes = getPrimes(max);

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end - start);

    cout << "Prime generation took " << duration.count() << " ms" << endl;

    cout << "π(" << max << ") = " << primes.size() << endl;
    cout << "Largest prime: " << primes.back() << endl;

    vector<long long> factors;
    
    bool isPrime = findPrimeFactors(number, primes, factors);

    sort(factors.begin(), factors.end());

    cout << "\nThe factors of " << number << " are: "
         << collectTerms(factors);

    if (isPrime)
        cout << "  Boo Ya! This baby is prime";

    cout << endl;
    return 0;
}