<template>
 <div>
  <input type="text" v-model="age"/>
  <p>나이는 {{ age }} 입니다.</p>
  <p v-if="age >=18"> 성인입니다</p>
  <p v-else-if="age < 18 && age >= 15"> 청소년 입니다</p>
  <p v-else> 어린이 입니다.</p><hr>

  <input type="text" v-model="pwd"/>
  <p>패스워드를 입력하세요 : {{ pwd }} </p>
  <p v-if="pwd == 1111"> {{name}}님 반갑습니다.</p>
  <p v-else> 로그인하세요.</p><hr>
 </div>
 </template>
 <script>
  export default {
   data(){
    return{
     age : 16,
     pwd : "",
     name : "김창복",
    };
   }
 }
</script>
