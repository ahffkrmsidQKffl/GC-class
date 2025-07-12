<template>
  <div id ="index" >
    <header>
      김창복의 portfolio
      <br />
      "준비된 개발자"
    </header>
    
    <div id="container">
      <div id ="nav">
        <ul class="menu">
          <li> <a href="#">나의 소개</a> 
            <ul class="submenu">
              <li><router-link to="/resume"> 이력서 </router-link></li>
              <li><router-link to="/selfintro"> 자기 소개서 </router-link></li>
            </ul>
          </li>

          <li>
          <a href="#">프로 젝트</a>
            <ul class="submenu">
              <li><router-link to="/project1"> project1 </router-link></li>
              <li><router-link to="/project2"> project2 </router-link></li>
              <li><router-link to="/project3"> project3 </router-link></li>
              <li><router-link to="/project4"> project4 </router-link></li>
            </ul>
          </li>

          <li>
          <a href="#">공 모 전</a>
            <ul class="submenu">
              <li><router-link to="/contest1"> Contest1 </router-link></li>
              <li><router-link to="/contest2"> Contest2 </router-link></li>
              <li><router-link to="/contest3"> Contest3 </router-link></li>
            </ul>
          </li>

          <li>
          <a href="#">나의 경력</a>
            <ul class="submenu">
              <li><router-link to="/career1"> 아르바이트 및 인턴 </router-link></li>
              <li><router-link to="/career2"> 사회봉사 및 연수 </router-link></li>
              <li><router-link to="/career3"> 자격증 및 그외 스펙 </router-link></li>
            </ul>
          </li>
        </ul>
      </div>
      <br />      <br />
      <div id = "main">
        <hr /> 
        <router-view /> 
        <hr /> 
      </div>
     </div>  
    
    <footer>
      Copyright 2023. 지은이 all rights reserved.
      <br />
      연락처 : 010-8906-3946
    </footer>
  </div>  
</template>

<style src="./App.css">
</style>