# Factorial Program In JavaScript

// Taking input
var ip = parseInt(prompt("Enter a number"));

// Program Logic
var factorial = 1;
for ( var i = 1; i <= ip; i++) {
    factorial = factorial * i;
}
document.write("Factorial of "+ ip +" is "+ factorial);
