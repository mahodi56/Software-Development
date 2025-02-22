const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter an integer: ", function(num) {
    let nextNum = parseInt(num) + 1;
    console.log("Next integer is:", nextNum);
    rl.close();
});
