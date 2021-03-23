#include <cmath>
bool isPrime(int num) {
    if((num != 1)&&(num > 0 )) {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    } else return false;
}