let num = [1,2,3,4,5];
let newArr = [];
let count =0;
let sum =0;
for(let i=0; i<num.length; i++){

if(num[i]%2==0){
 newArr.push(num[i]);
 count++;
 console.log(num[i])
 sum += num[i];
}
}
console.log( "count" +count);
console.log(sum)