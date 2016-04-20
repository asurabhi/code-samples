//
//  main.cpp
//  maxsubarray
//
//  Created by Ashwin Kumar Surabhi on 17/04/16.
//  Copyright © 2016 ashwinco. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    1≤T≤101≤T≤10
    1≤N≤1051≤N≤105
    −104≤ai≤104
    */
    int T,N;
    long long arr[1000*100];
    long long sum, largest;
    scanf("%d", &T);
    for (int i=0;i<T;i++) {
        scanf("%d",&N);
        for (int j=0;j<N;j++) {
            scanf("%lld", &arr[j]);
        }
        largest = arr[0];
        if (arr[0]>0) {
            sum = arr[0];
        } else {
            sum = 0;
        }
        for (int j=0;j<N;j++) {
            if (arr[j]>largest) {
                largest = arr[j];
            }
        }
        for (int j=1;j<N;j++) {
            if (arr[j]>0) {
                sum += arr[j];
            }
            if (arr[j-1]>0) {
                arr[j] += arr[j-1];
            }
        }
        
        if (sum == 0) {
            sum = largest;
        }
        
        for (int j=0;j<N;j++) {
            if (arr[j]>largest) {
                largest = arr[j];
            }
        }
        printf("%lld %lld\n", largest, sum);
    }
    return 0;
}
