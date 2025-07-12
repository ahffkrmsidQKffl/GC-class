<template>
  <div>
    <div id="nav">
      <router-link to="/"> HomeCmt </router-link>
      <router-link to="/about"> AboutCmt </router-link>
    </div>
    <hr>
    <div> <router-view /></div>
  </div>
</template>

<script>
  export default {
      name: 'App',
  }
</script>

<style>
#nav {
  font-size: 40px;
  background-color:antiquewhite;
}

a {
text-decoration: none;
}

</style>