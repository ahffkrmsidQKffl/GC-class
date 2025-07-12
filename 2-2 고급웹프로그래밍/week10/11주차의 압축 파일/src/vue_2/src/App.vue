<template>
  <div id ="index" >
    <header>
      김창복의 portfolio
      <br />
      "준비된 개발자"
    </header>
    
    <div id="container">
      <div id ="nav">
        <router-link class="link1" to="/introduction"> 나의 소개 </router-link>
        <router-link class="link1" to="/project"> 프로 젝트 </router-link>
        <router-link class="link1" to="/contest"> 공 모 전 </router-link>
        <router-link class="link1" to="/career"> 나의 경력 </router-link>
      </div>
     
      <div id = "main"> 
        <router-view /> 
      </div>
    </div>  
    
    <footer>
      Copyright 2023. 지은이 all rights reserved.
      <br />
      연락처 : 010-8906-3946
    </footer>
  </div>  
</template>

<style src="./App.css"> </style>
