<template>
  <div id = "article">
    <div v-if="idx ==''" id = "article1"> 
      <router-link class="link" to="/Regist"> 회원가입 </router-link>
      <router-link class="link" to="/login"> 로그인 </router-link>
    </div>
    <div v-else id = "article2"> 
      <router-link class="link" to="/Update"> 회원수정 </router-link>
      <router-link class="link" to="/Felete"> 회원탈퇴 </router-link>
    </div>
  </div>
  </template>
  
  <script> 
  export default { 
    data(){ 
      return { 
        idx: '' ,
       } 
    }
  }
</script>

<style scoped>
    #article {
        flex: 1;
        padding-left: 10px;
        height: 700px; 
        background: rgb(230, 230, 239);
        color: rgb(35, 36, 34);
        font-size: medium;
    }

    .link{
      display: block;
      font-size: 30px;
      text-decoration: none;
      padding: 0px;
    }
   .link:hover {
     background-color: #1f1103;
     color: white;
    }
</style>