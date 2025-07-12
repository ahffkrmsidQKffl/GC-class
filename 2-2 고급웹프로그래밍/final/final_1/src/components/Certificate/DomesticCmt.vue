<template>
    <div class="certifications-container">
      <h2>자격증</h2>
      <table>
        <thead>
          <tr>
            <th class="first">날짜</th>
            <th class="second">자격증</th>
            <th class="third">설명</th>
          </tr>
        </thead>
        <tbody>
          <tr v-for="(certification, index) in certificationsData" :key="index">
            <td class="first">{{ certification.date }}</td>
            <td class="second">{{ certification.name }}</td>
            <td class="third">{{ certification.description }}</td>
          </tr>
        </tbody>
      </table>
    </div>
  </template>
  
  <script>
  export default {
    data() {
      return {
        certificationsData: [
          { date: '20231203', name: '네트워크 관리사 2급', description: '네트워크 구축 및 이를 효과적으로 관리할 수 있는 인터넷 관련 기술력에 대한 자격' },
          { date: '20230115', name: '리눅스 마스터 2급', description: '리눅스의 전반적인 사용 능력을 평가' },
          { date: '20240201', name: 'SQLD', description: 'Structured Query Language + Developer' },
          { date: '20240901', name: '정보처리기사', description: '정보시스템의 생명주기 전반에 걸친 프로젝트 업무를 수행하는 직무로서 계획수립, 분석, 설계, 구현, 시험, 운영, 유지보수 등의 업무를 수행할 수 있는 능력을 검증' },
          { date: '20250101', name: '컴퓨터활용능력', description: '스프레드시트, 데이터베이스 활용 능력을 평가' },
          { date: '20250601', name: '빅데이터분석기사 ', description: '대용량의 데이터 집합으로부터 유용한 정보를 찾고 결과를 예측하기 위해 목적에 따라 분석기술과 방법론을 기반으로 정형/비정형 대용량 데이터를 구축, 탐색, 분석하고 시각화를 수행' },
          { date: '20250901', name: '정보보안기사 ', description: '시스템 및 솔루션 개발, 운영 및 관리, 컨설팅 등의 전문 이론과 실무능력을 기반으로 IT 기반시설 및 정보에 대한 체계적인 보안업무 수행' },
          // 다른 자격증들도 추가
        ],
      };
    },
  };
  </script>
  
  <style scoped>
.certifications-container {
    margin: 20px;
    padding: 20px;
    border: 1px solid #ccc;
    border-radius: 8px;
  }
  
  .certifications-container table {
    width: 100%;
    margin-top: 10px;
    border-collapse: collapse;
  }
  
  .certifications-container thead {
    background-color: #f2f2f2;
  }
  
  .certifications-container th, td {
    border: 1px solid #ddd;
    padding: 8px;
    text-align: left;
  }
  
  .certifications-container tbody tr:nth-child(odd) {
    background-color: #f9f9f9;
  }

  .first {
    width:25%;
  }

  .second {
    width:25%;
  }

  </style>