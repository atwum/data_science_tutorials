//
//  Ryan_prime_factorization_generator.c
//  
//
//  Created by Developer on 2/10/21.
//

//#include "Ryan_prime_factorization_generator.h"
#include <stdio.h>


int main(){
    int i, j, num, isPrime;
    
    //ask to input a number
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);
    //step 1: identify the list of primes
    for(i=2; i<=num; i++)
        {
            /* Check 'i' for factor of num */
            // % means remainder after division
            if(num%i==0)
            {
                /* Check 'i' for Prime */
                isPrime = 1;
                for(j=2; j<=i/2; j++)
                {
                    if(i%j==0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
                
                // If 'i' is Prime number and factor of num
                if(isPrime==1){
                    printf("%d",i);
                    int factor = i;
                    print(factor);
                    
                    
                }
            }
        }
}

    
    
    
    //step 2: use a function to spit out the powers for each prime number
    

//int main()
//{
//    int i, j, num, isPrime;
//
//    /* Input a number from user */
//    printf("Enter any number to print Prime factors: ");
//    scanf("%d", &num);
//
//    printf("All Prime Factors of %d are: \n", num);
//
//    /* Find all Prime factors */
//    for(i=2; i<=num; i++)
//    {
//        /* Check 'i' for factor of num */
//        if(num%i==0)
//        {
//            /* Check 'i' for Prime */
//            isPrime = 1;
//            for(j=2; j<=i/2; j++)
//            {
//                if(i%j==0)
//                {
//                    isPrime = 0;
//                    break;
//                }
//            }
//
//            /* If 'i' is Prime number and factor of num */
//            if(isPrime==1)
//            {
//                printf("%d, ", i);
//            }
//        }
//    }
//
//    return 0;
//}



// Test
//int main(void)
//{
//  printf("Hello, world!\n");
//  return 0;
//}
