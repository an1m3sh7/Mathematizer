// formula1: (a + b)2
// formula2: (a - b)2
// formula3: (a + b) * (a - b)

function main() {
    formula1(5,7);
    formula2(6,4);
    formula3(8,2);
}
function formula1(a,b) {
    let result = (a*a) + (2*a*b) + (b*b);
    console.log(result);
}
function formula2(a,b) {
    let result = (a*a) - (2*a*b) + (b*b);
    console.log(result);
}
function formula3(a,b) {
    let result = (a*a) - (b*b);
    console.log(result);
}
main();
// By Fonta22.
