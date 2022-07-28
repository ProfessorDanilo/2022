//temos 
//var
//let 
//const
/*
var é global quando declarada fora da função, podem ser declaradas novamente
Podemos usar uma var antes da declaração, pois as declarações vão para o topo do hoisting. Quando não inicializada, assume valor undefined

let tem escopo de bloco, pode ser atualizada mas não declarada novamente
Forma preferida de declaração de variáveis
Melhoria da var
A vantagem é que podemos ter diversas variáveis com o mesmo nome, mas com valores diferentes se em escopos diferentes
A let vai para o topo do hoisting, porém se não é atribuído um valor para ela, não se assume como undefined e gera um Reference Error


const tem escopo de bloco e não pode ser atualizada nem declarada novamente
Na declaração, deve ser atribuído um valor.
Se declararmos um objeto como const é possível mudar os valores dos elementos, mas deve-se proceder como no exemplo abaixo
*/
const greeting = {
  message: "say Hi",
  times: 4
}
console.log(greeting);
/*o código abaixo não irá funcionar
    greeting = {
        words: "Hello",
        number: "five"
    } // erro:  atribuição a uma variável constante.
//mas o a seguir funciona
*/
greeting.message = "say Hello instead";
console.log(greeting);


//veja outro exemplo interessante
var respostaDeTudo = 42
let idade = 29
const pi = 3.14
{
  var respostaDeTudo = 3.14
  let idade = 42
  const pi = 29
  console.log(respostaDeTudo, idade, pi)

}//note que var é global, mas let e const só vale no bloco correspondente. Portanto a impressão será 3.14 42 29 e 3.14 29 3.14.
console.log(respostaDeTudo, idade, pi)






var a = 0;
var b =0 ;
console.log (a/b);



function ganhoPorHora(salario, horasTrabalhadasNoMes) {

    const salarioHora = (salario / horasTrabalhadasNoMes); 
  
    return salarioHora;
  }


console.log(ganhoPorHora(3000,176));

console.log(Math.round(ganhoPorHora(3000,176)));


var resposta = ganhoPorHora(3000,176);
console.log(typeof(resposta));
resposta = resposta.toFixed(2);
console.log(resposta);
console.log(typeof(resposta));//note que toFixed muda para string


//trabalhando com moedas locais
function ganhoPorHoraFormatado(salario, horasTrabalhadasNoMes) {

    const salarioHora = (salario / horasTrabalhadasNoMes); 
  
    const formatado = salarioHora.toLocaleString('pt-BR', { style: 'currency', currency: 'BRL' });
  
    return formatado;  
  }
console.log(ganhoPorHoraFormatado(3000,176));

//Outros arredondamentos: 
//Math.ceil arredonda para o inteiro superior mais próximo
//Math.floor arredonda para o inteiro inferior mais próximo