#include <iostream>
#include <stdio.h>
#include "add.h"


using namespace std;

int main()
{
    printf("Hello World!\n");

    // the function "add" we now added to a namespace, which we now need in order to call it
    // we now say "BinaryCalclulations::add"
    auto result { BinaryCalculations::add(10, 5) };
    // cout << "the result of 10 plus 5 is " << result << endl;

    // print the first numbers of the Fibonaci series, until reaching 1000


    // Every loop has three important parts:
    // INITIALIZATION
    // INVARIANT (what does not vary -in (not) variant (varying))
    // HOMEWORK: "modus ponens/modus tolens" 
    // (why is it important to write better conditions?) => it is always better to be simple
    // INCREMENT (something that may break the invariant)

    // while
    {
        int i = 0, j = 1, x; // <= initialization
        //
        // (things may happen)
        //

        while (j <= 1000) { // <= invariant
            x = i + j;
            i = j;
            j = x; // <= increment
            printf("%d ", j);
        }
    }
    puts("");

    // for
    {
        int i = 0, x = 1;
        for (int j = 1; j <= 1000; j = x) { // <= for (INITIALIZATION; INVARIANT; INCREMENT)
            x = i + j;
            i = j;
            printf("%d ", x);
        }
    }
    puts("");


    // printf takes a variable number of parameters (thus is a "variadic" function)
    // we love it, because it is tidy
    // we hate it, because variadics are complicated to compile (by the compiler)
    // using it is easy, implementing it, tremendously difficult
    // printf("the result of %d plus %d is %d \n", 10, 5, result);
    return 0;
}
