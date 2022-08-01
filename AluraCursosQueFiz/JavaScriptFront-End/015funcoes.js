//forma declarativa
function minhaFuncao(param){
    //bloco de código
    return 0;
}
minhaFuncao("param");



//expressão de função
const soma = function(num1, num2) {
    return num1 + num2;
}
console.log(soma(1,2));
//note que neste caso a função não possui nome além de ser impossível chamar a função pela const soma antes da função ser salva dentro desta variável
console.log(typeof(soma));


//arrow function 
const apresentarArrow = nome => `meu nome é ${nome}`
const somar = (num1, num2) => num1 + num2;
console.log(apresentarArrow("Danilo"));
console.log(somar(5,10));

//com mais linhas de intrução
const somaNumerosPequenos = (num1, num2) => {
    if (num1 > 10 || num2 > 10){
        return "Somente números de 1 a 9";
    } else {
        return num1 + num2;
    }
}
