import React from 'react';
import './Resume.css';

const Resume = () => {
  return (
    <div className="resume-container">
      <div className="header">
        <h1>이력서</h1>
      </div>
      <div className="section">
        <div className="left-column">
          <div className="profile-image">
            <img src="/images/내얼굴.png" alt="프로필 이미지" />
          </div>
        </div>
        <div className="right-column">
          <div className="personal-info">
            <h2>인적 정보</h2>
            <ul>
              <li>이름: 강민형</li>
              <li>생년월일: 1997년 6월 28일</li>
              <li>전화번호: 010-4609-9706</li>
              <li>주소: 경기도 성남시 태평동 6476</li>
              {/* ... 기타 인적 정보 */}
            </ul>
          </div>
          <div className="education">
            <h2>학력</h2>
            <ul>
              <li>초등학교: 토평초등학교</li>
              <li>중학교: 구리중학교</li>
              <li>고등학교: 구리고등학교</li>
              <li>대학교: 가천대학교</li>
              <li>전공: 컴퓨터공학과</li>
              <li>졸업년도: 2024년</li>
              {/* ... 기타 학력 정보 */}
            </ul>
          </div>
          <div className="experience">
            <h2>경력</h2>
            <ul>
              <li>NAVER - 개발자 (2026년 ~ 2030년)</li>
              <li>GOOGLE - 개발자 (2031년 ~ 현재)</li>
              {/* ... 기타 경력 정보 */}
            </ul>
          </div>
          <div className="skills">
            <h2>기술 스택</h2>
            <ul>
              <li>JavaScript, React, VueJs, html, css</li>
              <li>C, C++, JAVA, Python, sql</li>
              <li>Linux</li>
              {/* ... 기타 기술 스택 정보 */}
            </ul>
          </div>
        </div>
      </div>
    </div>
  );
};

export default Resume;