#include <stdio.h>
#include <cs50.h>
#include <time.h>
#include <assert.h>

bool isPrime(int);
int sumPrimes (int);
bool testPrimes()

int main (void){
    // assert(isPrime(2) == true && "2 should be prime");
    assert(isPrime(1) == false && "2 should be prime");
    assert(isPrime(9) == false && "2 should be prime");
    assert(isPrime(11) == true && "2 should be prime");
}

bool testPrimes(void){

    return true;
}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int sumPrimes(int num){
    int sum = 0;
    for (int i = 2; i <= num; i++){
        if (isPrime (i)){
            sum += i;
        }
    }
    return sum;
}



