<template>
  <div id = "index">
    <HeaderComp />
    <div id="container">
      <NavComp/>
      <MainComp/>
    </div>
    <FooterComp/>  
  </div>
</template>

<script>
import HeaderComp from './components/HeaderComp.vue'
import NavComp from './components/NavComp.vue'
import MainComp from './components/MainComp.vue'
import FooterComp from './components/FooterComp.vue'
  export default {
      name: 'App',
      components: {
        HeaderComp,
        NavComp,
        MainComp,
        FooterComp,
      }
  }
</script>

<style src="./App.css"></style>