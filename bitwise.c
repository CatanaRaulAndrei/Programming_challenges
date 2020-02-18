#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// AND logic
int find_AND(int n,int k){
    int  max_bitwise=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int bitwise=i&j; // and 
            if(max_bitwise<bitwise && bitwise<k){
                max_bitwise=bitwise;
            }
        }
    }
    return max_bitwise;
}
// OR logic
int find_OR(int n,int k){
    int  max_bitwise=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int bitwise=i|j; // or
            if(max_bitwise<bitwise && bitwise<k){
                max_bitwise=bitwise;
            }
        }
    }
    return max_bitwise;
}
// XOR logic
int find_XOR(int n,int k){
    int  max_bitwise=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int bitwise=i^j; // xor
            if(max_bitwise<bitwise && bitwise<k){
                max_bitwise=bitwise;
            }
        }
    }
    return max_bitwise;
}

void calculate_the_maximum(int n, int k) {
  //Write your code here.
    printf("%d\n",find_AND(n,k));
    printf("%d\n",find_OR(n,k));
    printf("%d",find_XOR(n,k));
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
