var lista = [10, 1, 5, 9, 8, 12, 15];
console.log(lista)
console.log(lista.sort());
//a função sort usa a tabela ascii
//para ordenar uma lista de números podemos implementar uma função
function comparaNumeros(a,b) {
    if (a == b)  {
        return 0;
    } else if (a < b) {
        return -1;
    } else return 1;
}
//agora é só chamar a função
console.log(lista.sort(comparaNumeros));


//podemos simplificar o código usando uma função implícita
console.log(lista.sort((a,b) => a - b));