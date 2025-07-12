<template>
  <div>
    <router-link class="link2" to="/career/career1"> 아르바이트 및 인턴 </router-link>
    <router-link class="link2" to="/career/career2"> 사회봉사 및 연수 </router-link>
    <router-link class="link2" to="/career/career3"> 자격증 및 그외 스펙 </router-link>
    <router-view /> 
  </div>
</template>

<style>
  .career{
    margin-left: 100px;
  }
  fieldset {
    width: 1000px;
    margin-left: 50px;
    font-size: 1.2em;
  }
</style>