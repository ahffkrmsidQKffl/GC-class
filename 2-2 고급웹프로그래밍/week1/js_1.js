var a = 10;
var a = 20; // 동일한 변수 명으로 재 선언
if (a > 0) {
  var a = 200;
  console.log(a); // 200 출력
}
console.log(a); // 200 출력
