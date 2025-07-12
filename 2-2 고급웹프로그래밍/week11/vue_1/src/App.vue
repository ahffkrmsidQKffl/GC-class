<template>
<div>
  <HeaderCmt title="React" /> 
  <NavCmt />
  <MainCmt title="Welcome" body="React" />
 </div>
</template>
 
<script>
 import HeaderCmt from "./components/HeaderCmt";
 import NavCmt from "./components/NavCmt";
 import MainCmt from "./components/MainCmt";

 export default {
  components: {     
   HeaderCmt,
   NavCmt,
   MainCmt,
  }
 }
</script>
