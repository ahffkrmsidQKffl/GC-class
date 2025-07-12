const fs = require("fs"); // 파일 시스템 모듈 pip install fs

let data1 = fs.readFileSync("./test.txt", { encoding: "utf8" }); // 동기 방식
console.log(data1);
console.log("data1--------------------------------------");

let data2 = fs.readFileSync("./test.txt", { encoding: "utf8" }); // 동기 방식
console.log(data2);
console.log("data2--------------------------------------");
