// let a = [1, 2, 3]; // 배열 선언
// let b = a; // 배열 복사(객체는 참조값 복사)
// b.push(4); // 배열 Element 4 추가
// console.log(a);
// console.log(b);

let a = [1, 2, 3];
let b = [a, 4];
let c = [...a, 4];
console.log(a);
console.log(b);
console.log(c);
