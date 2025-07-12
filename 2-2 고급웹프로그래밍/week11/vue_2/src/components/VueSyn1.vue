<template>
 <div>
  <label>메시지:</label>
  <input type="text" v-model="msg"/>
  <div>{{msg}}</div>
 </div>
</template>
<script>
 export default {
  data() {
   return {
    msg:"Hello Vue"
   }
  }
 }
</script>
