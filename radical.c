//this C program calculates radical of numbers by a good approximate

#include <stdio.h>

void main() {
    int num;
    // "num" is the input number
  
    float  i, j;
    // "i" is a test number before being multiplied and "j" is the number after multiplication
    
    scanf("%d", &num);
    printf("\n");
    i = 0;
  
    // "k" is the scale of approximation, the smaller k makes better approximation
    for (float k = 1; k > 0.00001; k = k / 10) {
      
    // this loop continues untill the "j" gets bigger than the "num" 
    while (j < num) {
        i += k;   
        j = i * i;
    };

    // this line revereses a step of loop that has gone more than the number
    i -= k; j = i * i;

    };

    printf("radical %d is %0.3f\n", num, i);
    return 0;
}
