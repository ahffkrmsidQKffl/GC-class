<template>
 <div>
  <h2> {{message}} </h2>
  <button v-on:click="addNumber(1)"> 증가 </button>
  <button v-on:click="subNumber(1)"> 감소 </button>
  <button v-on:click="addNumber(10)"> 10 증가 </button>
  <button v-on:mouseover="subNumber(10)"> 10 감소 </button>
  <button v-on:click="greeting()"> 만남</button>
  <button v-on:click="goodbye()"> 작별</button>
  <div v-on:mousemove="getMousePosition" class="box"></div>
 </div>
 </template>

<script>
  export default {
   data(){
    return {
    count : 0,
    message: "",
    };
   }, 
   methods: {  // Event Handler
    subNumber(value) {
     this.count=this.count-value;
     this.message=this.count;
    },
    addNumber(value) {
     this.count=this.count+value;
     this.message=this.count;
    },
    greeting() {
     this.message ="안녕하세요. 반갑습니다."
    },
    goodbye() { this.message ="다음에 다시 봅시다." },
    getMousePosition(event) {
     this.message = `마우스의 위치 : ${event.pageX}, ${event.pageY}입니다.`;
    },
   }
  }
  </script>

  <style>
 .box {
 width: 300px;
 height: 300px;
 background: blue;
 }
</style>

