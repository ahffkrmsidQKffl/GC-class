<template>
  <div><nav>
        <ul class='menubar'>
          <li class='menubarbar'><h3>자기 소개</h3>
          <ul class="sub">
              <li><router-link to="/intro">자기 소개</router-link></li>
              <li><router-link to="/resume">이력서</router-link></li>
            </ul>
          </li>
          <li class='menubarbar'><h3>학업 성취도</h3>
          <ul class="sub">
              <li><router-link to="/collegelife">대학 생활</router-link></li>
              <li><router-link to="/grade">학점</router-link></li>
            </ul>
          </li>
          <li class='menubarbar'><h3>자격증</h3>
          <ul class="sub">
              <li><router-link to="/domestic">국내 자격증</router-link></li>
              <li><router-link to="/international">국제 자격증</router-link></li>
            </ul>
          </li>
          <li class='menubarbar'><h3>팀 프로젝트</h3>
          <ul class="sub">
              <li><router-link to="/oncampus">교내 활동</router-link></li>
              <li><router-link to="/extracurricular">대외 활동</router-link></li>
            </ul>
          </li>
          <li class='menubarbar'><h3>인턴십 및 실무</h3>
          <ul class="sub">
              <li><router-link to="/oncampusi">교내 활동</router-link></li>
              <li><router-link to="/extracurriculari">대외 활동</router-link></li>
            </ul>
          </li>
        </ul>
      </nav>
    <router-view/>
    <footer>
      <i>
        Copyright 2023. 강민형 all rights reserved. 연락처 : 010-4609-9706
      </i>
    </footer>
  </div>
</template>

<style>
/* 메뉴바 스타일 */
.menubar {
  background-color: orange;
  display: flex;
  justify-content: space-around;
  padding: 3px;
}

nav ul {
  list-style-type: none;
  margin: 0;
  padding: 0;
  display: flex;
  justify-content: space-around;
}

nav ul li {
  margin: 0 15px;
  position: relative;
  color : white;
  font-size: 30px;
}

nav ul li a {
  text-decoration: none;
  color: white;
  font-weight: bold;
}

.sub {
  display: none;
  position: absolute;
  top: 100%;
  left: 0;
  background-color: orange;
  width: 200px;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);
  border-radius: 4px;
  float : left;
  display : none;
}

nav ul li:hover > ul {
  display: flex; /* 서브메뉴를 가로로 정렬 */
  flex-direction: column; /* 세로로 나열하도록 설정 */
}

.sub li a:hover {
  text-decoration: underline;
}

footer {
  bottom: 0;
  left: 0;
  width: 100%;
  text-align: right;
  background-color: white;
  color: black;
  font-size: 15px;
}

#index {
  font-size : 50px;
  text-align: center;
}

</style>