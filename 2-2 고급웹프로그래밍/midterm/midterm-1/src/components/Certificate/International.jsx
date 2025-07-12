import React from 'react';
import './Certificate.css';

const International = () => {
  const certificationsData = [
    { date: '20240801', name: 'ICDL', description: '컴퓨터 활용 능력을 인증하는 국제 IT 자격증' },
    { date: '20241001', name: 'SCEA', description: '자바 EE 플랫폼용 Sun 인증 엔터프라이즈 설계자 인증 자격증. (자바 관련 자격증 중에서 최고권위)' },
    { date: '20241201', name: '토익(700점 목표)', description: '국제 실용 영어 능력 시험(Test Of English for International Communication)' },
    { date: '20251001', name: '토플(100점 목표)', description: '외국어로서의 영어 시험(Test Of English as a Foreign Language)' },
    { date: '20251201', name: '토익(900점 목표)', description: '국제 실용 영어 능력 시험(Test Of English for International Communication)' }

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

export default International;