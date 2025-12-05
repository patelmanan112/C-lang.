const data = { 
students: [{ name: "Krishna", scores: [78, 82, 91] }, { name: "Dev", scores: [85, 88, 95] }], 
extra: [10, 5, 15, 20], 
active: true, 
}; 
let extra=data.extra;


for (let i = 0; i < extra.length; i++) {
  for (let j = 0; j < extra.length - 1; j++) {  // 0 
    if (extra[j] < extra[j + 1]) {  // 10 < 5    5<15

      let temp = extra[j]; // 5
      extra[j] = extra[j + 1];  // 15 
      extra[j + 1] = temp;   // 
    }
  }
}
console.log(extra)
console.log(extra[0]);                 
console.log(extra[extra.length-1]);

