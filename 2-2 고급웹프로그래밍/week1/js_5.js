function multiply(x, y) {
  return x * y; // 3. 실행
}
function printSquare(x) {
  var s = multiply(x, x); // 2. 함수 호출 : [스텝 2]
  console.log(s); // 4. 함수 호출 및 실행 :> [스텝 3]
}
printSquare(5); // 1. 함수 호출 -> [스텝 1] / [스텝 4] -> [스텝 5]
