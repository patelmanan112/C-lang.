const data = { 
students: [{ name: "Krishna", scores: [78, 82, 91] }, { name: "Dev", scores: [85, 88, 95] }], 
extra: [10, 5, 15, 20], 
active: true, 
}; 
let newArr = [];
let sum =0;

for(let i=0; i<data.students.length ; i++){
    sum =0;
    for(let j=0; j<data.students[i].scores.length; j++){
        sum += data.students[i].scores[j];
    }
  newArr.push(sum);
}

 let max = newArr[0];
for(let k=0; k<newArr.length; k++){
   
    if(newArr[k]>max){
        max = newArr[k];
        console.log(data.students[k]);
    }
}

console.log(Math.floor(max/3));