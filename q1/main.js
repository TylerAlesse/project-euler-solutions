let sumA = 0;
let sumB = 0;
let n = 1000;

for (let i = 1; i < n; ++i) {
    //* Most straight forward solution
    if (i % 3 === 0 || i % 5 === 0) {
        sumA += i;
    }

    //* Could instead use a ternary operation
    sumB += i % 3 === 0 || i % 5 === 0 ? i : 0;
}

console.log(`  If: ${sumA}`);
console.log(`Tern: ${sumB}`);
