<template>
    <div class="GradeListDiv">
      <h2>전체 학점 정보</h2>
      <GradeCmt v-for="(semester, index) in semesters" :key="index" :semester="semester.semester" :subjects="semester.subjects" />
    </div>
  </template>
  
  <script>
  import GradeCmt from './GradeCmt';
  
  export default {
    data() {
      return { semesters: [
        { semester: '1학년 1', subjects: [
        { name: '한국사', credit: 2, grade: 'A' },
        { name: '손에 잡히는 프로그래밍', credit: 2, grade: 'A' },
      { name: 'College English 1', credit: 1, grade: 'A+' },
      { name: '파이썬', credit: 3, grade: 'A+' },
      { name: '선형대수', credit: 3, grade: 'A+' },
      { name: '컴퓨터공학개론', credit: 3, grade: 'B' },
      { name: '일본어', credit: 2, grade: 'B+' }
    ] },
    { semester: '1학년 2', subjects: [
      { name: '논리적 사고', credit: 2, grade: 'A+' },
      { name: '지능형 정보 기술', credit: 2, grade: 'A+' },
      { name: '예술과 철학', credit: 1, grade: 'A' },
      { name: 'College English 2', credit: 1, grade: 'A+' },
      { name: '과학기술글쓰기', credit: 2, grade: 'A+' },
      { name: 'C언어', credit: 3, grade: 'A' },
      { name: '이산수학', credit: 3, grade: 'A+' },
      { name: '컴퓨터구조', credit: 3, grade: 'C+' }
    ] },
    { semester: '2학년 1', subjects: [
        { name: '확률과 통계', credit: 3, grade: 'A+' },
        { name: '동서양의 지혜', credit: 3, grade: 'A+' },
        { name: 'C++', credit: 3, grade: 'A+' },
        { name: '리눅스', credit: 3, grade: 'A+' },
        { name: '웹프로그래밍', credit: 3, grade: 'A+' },
        { name: '자료구조', credit: 3, grade: 'A+' }
      ] },
      { semester: '2학년 2', subjects: [
        { name: '운영체제', credit: 3, grade: 'A' },
        { name: '데이터통신', credit: 3, grade: 'A' },
        { name: '심리학의 이해', credit: 3, grade: 'A' },
        { name: '데이터베이스', credit: 3, grade: 'A' },
        { name: '고급웹프로그래밍', credit: 3, grade: 'A' },
        { name: 'JAVA', credit: 3, grade: 'A' }
      ] },
      { semester: '3학년 1', subjects: [
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' }
      ] },
      { semester: '3학년 2', subjects: [
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' }
      ] },
      { semester: '4학년 1', subjects: [
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' }
      ] },
      { semester: '4학년 2', subjects: [
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' },
        { name: '미정', credit: 3, grade: 'A+' }
      ] }
      ]
    };
  },
  components: {
    GradeCmt
  }
};
</script>

<style scoped>
/* 전체 학점 정보를 감싸는 div 스타일 */
.GradeListDiv {
    margin: 20px;
    padding: 20px;
    border: 1px solid #ccc;
    border-radius: 8px;
  }
</style>