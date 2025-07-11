let sum = 0;
let n = 10;

for (let i = 1; i < n; ++i) {
    //* Most straight forward solution
    // if (i % 3 === 0 || i % 5 === 0) {
    //     sum += i;
    // }

    //* Could instead use a ternary operation
    sum += i % 3 === 0 || i % 5 === 0 ? i : 0;
}

console.log(sum);
