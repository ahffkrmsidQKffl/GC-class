<template>
  <div>
    <router-link class="link2" to="/contest/contest1"> Contest1 </router-link>
    <router-link class="link2" to="/contest/contest2"> Contest2 </router-link>
    <router-link class="link2" to="/contest/contest3"> Contest3 </router-link>
    <router-view /> 
  </div>
</template>

<style>
  .contest{
    margin-left: 100px;
  }
  fieldset {
    width: 1000px;
    margin-left: 50px;
    font-size: 1.5em;
  }
</style>