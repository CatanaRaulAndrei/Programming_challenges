/**
### Happy numbers ###

A happy number is defined by the following process:
Starting with any positive integer,
replace the number by the sum of the squares of its digits,
and repeat the process until the number equals 1 (where it will stay),
or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy numbers,
while those that do not end in 1 are unhappy numbers.
Implement a function that returns true if the number is happy, or false if not.

**/
#include <iostream>
#include <math.h>
using namespace std;

// sum of the squared remainders
int remainderSquared(int number){
int sum=0,temp=0,remainder=0;
temp=number;
while(temp!=0){
    remainder=temp%10;
    sum=sum+pow(remainder,2);
    temp=temp/10;
}
return sum;
}
// we will see if  the number is happy or not
bool isHappy(int number){
int slow=0,fast=0;
slow = number;
fast = number;
do{
  slow = remainderSquared(slow);
  fast = remainderSquared(remainderSquared(fast));
}while(slow!=fast);

return slow==1;
}

int main()
{int number =33;
    if(isHappy(number)==1){
        cout<<"Number "<<number<<" is Happy :)";
    }
    else{
        cout<<"Number "<<number<<" is Sad :(";
    }
    return 0;
}
