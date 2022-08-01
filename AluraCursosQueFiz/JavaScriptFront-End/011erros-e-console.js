/*os principais (até agora e para este curso) são:
RangeError
ReferenceError
SyntaxError
TypeError

mas podemos consultar mais códigos de erros na documentação oficial
https://nodejs.org/api/errors.html#errors_errors
*/
console.time();
console.error("Teste");
console.timeEnd();
//console.table();
//console.trace();



//veja mais detalhes sobre erros no JS
console.log("deu erro");
console.error(new Error("deu erro"));