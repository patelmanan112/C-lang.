let num1= +prompt("enter first value");
let operator= prompt("enter operator");
let num2=+prompt("enter second number ");
let result;
if(operator=="+"){
    result= num1+num2;
}
else if(operator=="-"){
    result= num1-num2;
}
else if(operator=="*"){
    result= num1*num2;
}
else if(operator=="/"){
    if(num2!=0){
     result= num1/num2;
    }
    else {
        result= "division by zero is not possible";
    }
}
else{
    result="invalid operator";
}

alert("the result is "+result);