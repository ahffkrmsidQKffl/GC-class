<template>
  <div>
      <router-link class="link2" to="/project/project1"> project1 </router-link>
      <router-link class="link2" to="/project/project2"> project2 </router-link>
      <router-link class="link2" to="/project/project3"> project3 </router-link>
      <router-link class="link2" to="/project/project4"> project4 </router-link>
      <router-view /> 
  </div>
</template>

<style>
  .project{
    margin-left: 100px;
  }
  fieldset {
    width: 1000px;
    margin-left: 50px;
    font-size: 1.5em;
  }
</style>