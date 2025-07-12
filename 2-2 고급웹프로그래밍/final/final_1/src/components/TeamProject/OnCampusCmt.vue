<template>
  <div class="TeamProjectBtn">
    <button v-for="(oncampus, index) in oncampuses" :key="index" @click="contentChange(index)">
      {{ oncampus.tab }}
    </button>

    <component :is="currentComponent"></component>
  </div>
</template>

<script>
import oncampuses from "./oncampuses";

export default {
  data() {
    return {
      oncampuses: oncampuses,
      currentIndex: 0,
    };
  },
  computed: {
    currentComponent() {
      return this.oncampuses[this.currentIndex].content;
    },
  },
  methods: {
    contentChange(index) {
      this.currentIndex = index;
    },
  },
};
</script>

<style scoped>
.TeamProjectBtn {
    display: flex;
    flex-direction: column;
    align-items: center;
  }
  
  .TeamProjectBtn button {
    background-color: #3498db;
    color: #fff;
    padding: 10px 20px;
    margin: 5px;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    transition: background-color 0.3s;
  }
  
  .TeamProjectBtn button:hover {
    background-color: #2980b9;
  }
</style>