<template>
    <div class="GradeDiv">
      <h3>{{ semester }}학기</h3>
      <table>
        <thead>
          <tr>
            <th>과목</th>
            <th>학점</th>
            <th>평점</th>
          </tr>
        </thead>
        <tbody>
          <tr v-for="(subject, index) in subjects" :key="index">
            <td>{{ subject.name }}</td>
            <td>{{ subject.credit }}</td>
            <td>{{ subject.grade }}</td>
          </tr>
        </tbody>
      </table>
    </div>
  </template>
  
  <script>
  export default {
    props: {
      semester: String,
      subjects: Array,
    },
  };
  </script>
  
  <style scoped>
  /* 테이블 스타일 */
  .GradeDiv table {
    width: 100%;
    margin-top: 10px;
    border-collapse: collapse;
  }
  
  /* 테이블 헤더 스타일 */
  .GradeDiv thead {
    background-color: #f2f2f2;
  }
  
  /* 테이블 셀 스타일 */
  .GradeDiv th, td {
    border: 1px solid #ddd;
    padding: 8px;
    text-align: left;
    width:100px;
  }
  
  /* 홀수 행 배경색 변경 */
  .GradeDiv tbody tr:nth-child(odd) {
    background-color: #f9f9f9;
  }
  </style>