//Write the code to rotate the values of the given three Numbers. 
//After rotation a will be assigned the value of c, b will be assigned the value of a and c will be assigned the value of b.
//Write the expression trace for the code and submit the object diagram.
//Note: You are allowed to use just one extra variable to do the swapping

let a = 1;
let b = 2;
let c = 3;
// write your code here
let temp = a;
a = c;
c = b;
b = temp;
console.log(a,b,c);// should print 3 1 2