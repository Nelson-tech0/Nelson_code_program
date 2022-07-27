//Exercise : Expression Trace abc

let a = 'a';
let b = 5;
a = a + 'b';
b = b + 5;
let c = b + '1';
a = a + c;
b = b + c;
console.log(a,b);