import React from 'react';
import './Certificate.css';

const Domestic = () => {
  const certificationsData = [
    { date: '20231203', name: '네트워크 관리사 2급', description: '네트워크 구축 및 이를 효과적으로 관리할 수 있는 인터넷 관련 기술력에 대한 자격' },
    { date: '20230115', name: '리눅스 마스터 2급', description: '리눅스의 전반적인 사용 능력을 평가' },
    { date: '20240201', name: 'SQLD', description: 'Structured Query Language + Developer' },
    { date: '20240901', name: '정보처리기사', description: '정보시스템의 생명주기 전반에 걸친 프로젝트 업무를 수행하는 직무로서 계획수립, 분석, 설계, 구현, 시험, 운영, 유지보수 등의 업무를 수행할 수 있는 능력을 검증' },
    { date: '20250101', name: '컴퓨터활용능력', description: '스프레드시트, 데이터베이스 활용 능력을 평가' },
    { date: '20250601', name: '빅데이터분석기사 ', description: '대용량의 데이터 집합으로부터 유용한 정보를 찾고 결과를 예측하기 위해 목적에 따라 분석기술과 방법론을 기반으로 정형/비정형 대용량 데이터를 구축, 탐색, 분석하고 시각화를 수행' },
    { date: '20250901', name: '정보보안기사 ', description: '시스템 및 솔루션 개발, 운영 및 관리, 컨설팅 등의 전문 이론과 실무능력을 기반으로 IT 기반시설 및 정보에 대한 체계적인 보안업무 수행' },
    // 다른 자격증들도 추가
  ];

  return (
    <div className="certifications-container">
      <h2>자격증</h2>
      <table>
        <thead>
          <tr>
            <th className='first'>날짜</th>
            <th className='second'>자격증</th>
            <th className='third'>설명</th>
          </tr>
        </thead>
        <tbody>
          {certificationsData.map((certification, index) => (
            <tr key={index}>
              <td className='first'>{certification.date}</td>
              <td className='second'>{certification.name}</td>
              <td className='third'>{certification.description}</td>
            </tr>
          ))}
        </tbody>
      </table>
    </div>
    
  );
};

export default Domestic;