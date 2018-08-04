//
//  FizzBuzz.c
//  FizzBuzz
//
//  Created by Bianca Roxas on 5/29/18.
//  Copyright © 2018 Bianca Roxas. All rights reserved.
//

#include "FizzBuzz.h"
#include <stdio.h>

int main() {
    
    for (int i=1; i<=100; i++) {
        int n = 3;
        int j = 5;
        if (i%n == 0) {
            printf("Fizz \n");
        }
        else if (i%j == 0){
            printf("FizzBuzz \n");
        }
        else {
        printf("%d \n", i);
        }
    }
    return 0;
}
