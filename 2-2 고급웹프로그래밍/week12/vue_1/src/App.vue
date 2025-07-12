<template>
   <div>
    <div class="header">
     <router-link to="/" class="item"> Home </router-link>
     <router-link to="/about" class="item"> About </router-link>
     <router-link to="/exercise1" class="item"> 실습 1 </router-link>
     <router-link to="/exercise2" class="item"> 실습 2 </router-link>
     <router-link to="/exercise3" class="item"> 실습 3 </router-link> 
     <router-link to="/exercise4" class="item"> 실습 4 </router-link> 
    </div>
    <div>
     <router-view />  
    </div> 
   </div>    
  </template>

<style>
.header {
 background : blue ;
 display: table ;
 width : 70% 
}
.item {
 text-align : center ;
 padding-top : 5px ;
 padding-bottom : 5px;
 display : table-cell ;
 color : white ;
 text-decoration : none ;
 font-size : 1.5rem ;
}
.item:hover {
 background : orange ;
}
.item:active {
 background : white;
 color : blue;
}
</style>
