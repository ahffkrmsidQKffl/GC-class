<template>
 <header>
  <h1>
  <a href="/">{{title}}</a>
 </h1>
 </header>
</template>
<script>
 export default {
  props: {
   title: { type: String }
  },
 };
</script>
