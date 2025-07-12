<template>
   <div>
    <h1>{{ count }}</h1>
    <button @click="increase">INCREASE + 1</button>
   </div>
  </template>
  <script>
  export default {
   computed: {
    count() {
     return this.$store.state.counter.count
    },
   },
   methods: {
    increase() {
     this.$store.dispatch('counter/increase')
    }
   }
  }
  </script>
  