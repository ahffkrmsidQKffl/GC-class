const fs = require("fs");
// 함수 실행 -> 콜백 함수에 실행을 맡기고 다음 코드 실행
let data1 = fs.readFile("./test.txt", { encoding: "utf8" }, (err, data1) => {
  console.log(data1);
  console.log("data1--------------------------------------");
});
let data2 = fs.readFile("./test.txt", { encoding: "utf8" }, (err, data2) => {
  console.log(data2);
  console.log("data1--------------------------------------");
});
console.log("3 ----------------------------------");
