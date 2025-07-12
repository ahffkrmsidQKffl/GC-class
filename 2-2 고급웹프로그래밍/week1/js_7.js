const fs = require("fs");

// 비동기 방식(함수 실행 -> 콜백 함수에 실행을 맡기고 다음으로 실행 옮김)
let data1 = fs.readFile(
  "./test.txt",
  { encoding: "utf8" },
  function (err, data1) {
    // 콜백함수
    console.log(data1);
    console.log("data1--------------------------------------");
  }
);

let data2 = fs.readFile(
  "./test.txt",
  { encoding: "utf8" },
  function (err, data2) {
    // 콜백함수
    console.log(data2);
    console.log("data1--------------------------------------");
  }
);
console.log("3 ----------------------------------");
