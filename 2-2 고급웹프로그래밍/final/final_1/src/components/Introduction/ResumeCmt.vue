<template>
    <div class="resume-container">
      <div class="header">
        <h1>이력서</h1>
      </div>
      <div class="section">
        <div class="left-column">
          <div class="profile-image">
            <img src="/images/내얼굴.png" alt="프로필 이미지" />
          </div>
        </div>
        <div class="right-column">
          <div class="personal-info">
            <h2>인적 정보</h2>
            <ul>
              <li>이름: 강민형</li>
              <li>생년월일: 1997년 6월 28일</li>
              <li>전화번호: 010-4609-9706</li>
              <li>주소: 경기도 성남시 태평동 6476</li>
            </ul>
          </div>
          <div class="education">
            <h2>학력</h2>
            <ul>
              <li>초등학교: 토평초등학교</li>
              <li>중학교: 구리중학교</li>
              <li>고등학교: 구리고등학교</li>
              <li>대학교: 가천대학교</li>
              <li>전공: 컴퓨터공학과</li>
              <li>졸업년도: 2024년</li>
            </ul>
          </div>
          <div class="experience">
            <h2>경력</h2>
            <ul>
              <li>NAVER - 개발자 (2026년 ~ 2030년)</li>
              <li>GOOGLE - 개발자 (2031년 ~ 현재)</li>
            </ul>
          </div>
          <div class="skills">
            <h2>기술 스택</h2>
            <ul>
              <li>JavaScript, React, VueJs, html, css</li>
              <li>C, C++, JAVA, Python, sql</li>
              <li>Linux</li>
            </ul>
          </div>
        </div>
      </div>
    </div>
    </template>

    <style scoped>
.resume-container {
    max-width: 800px;
    margin: 30px auto;
    border: 3px solid orange;
    border-radius: 10px;
    background-color: white;
  }

  .header {
    text-align: center;
    padding: 20px;
    background-color: orange;
    color: white;
  }

  .section {
    display: flex;
  }

  .left-column {
    flex: 1;
  }

  .right-column {
    flex: 2;
    padding: 20px;
  }

  .profile-image img {
    width: 300px;
    height: 400px;
    margin-bottom: 20px;
    padding : 10px;
  }

  .personal-info, .education, .experience, .skills {
    margin-bottom: 30px;
  }

  .right-column h2 {
    border-bottom: 2px solid #333;
    padding-bottom: 5px;
    margin-bottom: 10px;
  }

  .right-column ul {
    list-style-type: none;
    padding: 0;
  }

  .right-column li {
    margin-bottom: 8px;
  }
</style>