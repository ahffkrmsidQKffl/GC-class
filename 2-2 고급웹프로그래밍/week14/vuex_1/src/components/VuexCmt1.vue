<template>
      <div>
       <h3>VuexCmt1.vue</h3>
       {{ counter }}
       <button v-on:click="inc">inc</button>
      </div>
     </template>
     
     <script>
     import { computed } from "vue";
     import { useStore } from "vuex";
     export default {
      setup() {
       const store = useStore();
       const counter = computed(() => store.state.counter);
       const inc = () => store.commit("setCounter", counter.value + 2);
       return { counter, inc};
      }
     };
     </script>
     