#include <stdio.h>

int main() {
    int a;
    
    // Case 1: Both conditions are false (2<1 is false AND 4<3 is false)
    // Result: 0 (false)
    // a = (2<1) && (4<3);
    printf("\n (2<1) && (4<3) = %d",a = (2<1) && (4<3));
    
    // Case 2: First condition is false, second is true (2<1 is false AND 4>3 is true)
    // Result: 0 (false) - AND requires both to be true
    // a = (2<1) && (4>3);
    printf("\n (2<1) && (4>3) = %d",a = (2<1) && (4>3));
    
    // Case 3: First condition is true, second is false (2>1 is true AND 4<3 is false)
    // Result: 0 (false) - AND requires both to be true
    // a = (2>1) && (4<3);
    printf("\n (2>1) && (4<3) = %d",a = (2>1) && (4<3));
    
    // Case 4: Both conditions are true (2>1 is true AND 4>3 is true)
    // Result: 1 (true) - Both conditions are satisfied
    // a = (2>1) && (4>3);
    printf("\n (2>1) && (4>3) = %d",a = (2>1) && (4>3));

    return 0;
}
