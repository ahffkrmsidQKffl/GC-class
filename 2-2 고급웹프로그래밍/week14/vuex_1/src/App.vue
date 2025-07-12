<template>
   <div>
   <h2>Vuex 예제 3</h2>
    state : {{ counter }} <br/>
    getter : {{ test }}<br/>
    getter : {{ test.time2 }}<br/>
    <button @click="inc">inc</button>
  
    <VuexCmt1></VuexCmt1>
    <VuexCmt2></VuexCmt2>
   </div>
  </template>
  
  <script>
  import { computed } from "vue";
  import { useStore } from "vuex";
  import VuexCmt1 from './components/VuexCmt1'
  import VuexCmt2 from './components/VuexCmt2'
  export default {
   components: {
    VuexCmt1,
    VuexCmt2,
   },
  
   setup() {
    const store = useStore();
    const counter = computed(() => store.state.counter);
    const test = computed(() => store.getters);
    const inc = () => store.commit("setCounter", counter.value + 1);
    return { counter, test, inc };
   }
  };
  </script>
  
  