//
//  main.cpp
//  Fibonacci
//
//  Created by Ashwin Kumar Surabhi on 17/04/16.
//  Copyright © 2016 ashwinco. All rights reserved.
//

#error hackerrank inputs requires more than long long precision

#include <iostream>
using namespace std;

int A;
int B;
//added comment
long long d1[20];
long long d2[20];
void resetArrays() {
    for (int i=0;i<20;i++) {
        d1[i] = -1;
        d2[i] = -1;
    }
}
long long fib(int i) {
    if (i == 0) {
        return A;
    }
    if (i == 1) {
        return B;
    }
    long long t1, t2;
    
    //get t1
    if (d2[i-1] == -1) {
        if (d1[i-1] == -1) {
            d1[i-1] = fib(i-1);
        }
        d2[i-1] = d1[i-1] * d1[i-1];
    }
    t1 = d2[i-1];
    
    //get t2
    if (d1[i-2] == -1) {
        d1[i-2] = fib(i-2);
    }
    t2 = d1[i-2];
    return t1 + t2;
}

int main(int argc, const char * argv[]) {
    int index;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &index);
    resetArrays();
    printf("%lld\n", fib(index-1));
    return 0;
}
