/*
### Happy numbers ###

A happy number is defined by the following process:
Starting with any positive integer,replace the number by the sum of the squares of its digits,
and repeat the process until the number equals 1 (where it will stay), 
or it loops endlessly in a cycle which does not include 1. 
Those numbers for which this process ends in 1 are happy numbers, 
while those that do not end in 1 are unhappy numbers.
Implement a function that returns true if the number is happy, or false if not.

*/

// function for sum of squared remainders
function reminderSquared(number){
    let temp = number,sum=0,reminder=0;
    while (temp != 0) {
        reminder = Math.floor(temp % 10);
        sum = sum + Math.pow(reminder,2);
        temp = temp / 10;
      }
 return sum;    
}

// find if the number is happy or not 
function isHappy(number){
    let slow = number,fast = number;
    do{
       slow = reminderSquared(slow);
       fast = reminderSquared(reminderSquared(fast));   
    }while(slow!=fast);

return slow==1;  
}
// results 
console.log(isHappy(1)); // true
console.log(isHappy(2)); // false
console.log(isHappy(7)); //  true
console.log(isHappy(10)); // true
console.log(isHappy(13)); // true
console.log(isHappy(19)); // true
console.log(isHappy(23)); // true
console.log(isHappy(28)); // true
console.log(isHappy(31)); // true
console.log(isHappy(32)); // true
console.log(isHappy(33)); // false
