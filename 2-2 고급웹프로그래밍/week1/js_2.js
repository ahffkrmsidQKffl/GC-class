let a = 10;
// let a = 20;   // 에러(동일한 변수명을 선언할 수 없음)
if (a > 0) {
  let a = 200;
  console.log(a); // 200  출력
}
console.log(a); // 10 출력
