<template>
 <main>
 <h2>{{title}}</h2>
 Hell.{{body}}
 </main>
</template>
<script>
 export default {
  props: {
   title: { type: String },
   body : { type: String }
  },
 };
</script>
